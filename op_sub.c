#include "monty.h"

/**
 * op_sub - subtract the top elements of the stack from the second top element
 * @stack: double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_sub(stack_t **stack, unsigned int line_number)
{
	int subb;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		free_list(stack);
		exit(EXIT_FAILURE);
	}


	subb = temp->next->n - temp->n;
	op_pop(stack, line_number);
	(*stack)->next->n = subb;
}
