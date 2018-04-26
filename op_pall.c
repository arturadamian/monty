#include "monty.h"

/**
 * op_pall - adds up elements of the linked lists
 * @stack: double pointer to the stack
 * @line_number: line number
 * Return: nothing
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	UNUSED(line_number);
	temp = *stack;
	if (temp != NULL)
	{
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}
