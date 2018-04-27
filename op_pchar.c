#include "monty.h"

/**
 * op_pchar - prints the char at the top of the stack
 * @stack: double pointer to the stack
 * @line_number: current line number
 */

void op_pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (((*stack)->n < 65 || (*stack)->n > 90) &&
	    ((*stack)->n < 97 || (*stack)->n > 122))
	{
		printf("L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);

}
