#include "monty.h"

/**
 * op_push - pushes an element into the stack
 * @stack: double pointer to the stack
 * @line_number: line number
 * Return: nothing
 */

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *plates = NULL;
	stack_t *temp = NULL;
	char *tok_data;
	int toky = 0;

	temp = *stack;
	tok_data = strtok('\0', DELIMITERS);
	if (!tok_data || !_isdigit(tok_data))
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	toky = atoi(tok_data);

	plates = malloc(sizeof(stack_t));
	if (plates == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	plates->n = toky;
	plates->prev = NULL;

	if (*stack == NULL)
	{
		plates->next = NULL;
		*stack = plates;
	}
	else
		if (data == 0)
		{
			plates->next = *stack;
			(*stack)->prev = plates;
			*stack = plates;
		}
 		if (data == 1)
	 	{
			while (temp->next != NULL)
			 	temp = temp->next;

	 		temp->next = plates;
		 	plates->prev = temp;
			plates->next = NULL;
	 	}
}
