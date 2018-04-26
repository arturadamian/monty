#include "monty.h"

/**
 * op_add - adds the top two elements of the stack
 * @stack - double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_add(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L<%d>: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->n + (*stack)->next->n;
	op_pop(stack, line_number);
}
