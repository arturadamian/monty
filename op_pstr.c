#include "monty.h"

/**
 * op_pstr - prints str
 * @stack: double pointer to the stack
 * @line_number: line number
 * Return: nothing
 */
void op_pstr(stack_t **stack, unsigned int line_number)
{
        stack_t *temp;

        UNUSED(line_number);
        temp = *stack;
        if (temp == NULL)
		printf("\n");
	while ((temp || temp->n != '\0') && (temp->n > 0 && temp->n < 127))
	{
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
