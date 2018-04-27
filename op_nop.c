#include "monty.h"

/**
 * op_nop - opcode that doesn't do anything
 * @stack: double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
}
