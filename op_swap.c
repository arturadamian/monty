#include "monty.h"

/**
 * op_swap - swaps the top two elements of the stack
 * @stack - double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L<%d>: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/*need to account for if stack is less than two elements*/
	(*stack)->next = (*stack)->next->next;
	(*stack)->next->next = (*stack)->next->prev;
	(*stack)->next->next->prev = *stack;
	(*stack)->prev = (*stack)->next;
	(*stack)->next->prev = NULL;
}
