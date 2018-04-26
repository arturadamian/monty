#include "monty.h"

/**
 * op_pall - adds up elements of the linked lists
 * @stack: double pointer to the stack
 * @line_number: line number
 * Return: nothing
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	UNUSED(line_number);
	if (*stack != NULL)
	{
		while (*stack)
		{
			printf("%d\n", (*stack)->n);
			*stack = (*stack)->next;
		}
	}
}
