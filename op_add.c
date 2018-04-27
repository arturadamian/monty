#include "monty.h"

/**
 * op_add - adds the top two elements of the stack
 * @stack: double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_add(stack_t **stack, unsigned int line_number)
{
	int summ;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	summ = (*stack)->n + (*stack)->next->n;
	op_pop(stack, line_number);
	(*stack)->n = summ;
}
