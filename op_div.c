#include "monty.h"

/**
 * op_div - divides the second top element of the stack by the top element
 * @stack: double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_div(stack_t **stack, unsigned int line_number)
{
	int div;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	div = (*stack)->next->n / (*stack)->n;
	op_pop(stack, line_number);
	(*stack)->n = div;
}
