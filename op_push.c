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
	char *tok_data;

	UNUSED(line_number);
	tok_data = strtok('\0', DELIMITERS);
	if (!tok_data || !_isdigit(tok_data))
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = atoi(tok_data);

	plates = malloc(sizeof(stack_t));
	if (plates == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	plates->n = data;
	plates->prev = NULL;

	if (*stack == NULL)
	{
		plates->next = NULL;
		*stack = plates;
	}

	else
	{
		plates->next = *stack;
		(*stack)->prev = plates;
		*stack = plates;
	}

}
