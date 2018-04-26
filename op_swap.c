#include "monty.h"

/**
 * op_swap - swaps the top two elements of the stack
 * @stack - double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/*need to account for if stack is less than two elements*/
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
