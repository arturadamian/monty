#include "monty.h"

/**
 * op_mod - computes the mod of the second top by the top element
 * @stack: double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_mod(stack_t **stack, unsigned int line_number)
{
	int summ;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	summ = (*stack)->next->n % (*stack)->n;
	op_pop(stack, line_number);
	(*stack)->next->n = summ;
}
