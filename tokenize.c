#include "monty.h"

/**
 * tokenize - tokenizes a string
 * @s: string that will be tokenized
 * @stack: list
 * @line_number: lines
 */
void tokenize(char *s, stack_t **stack, unsigned int line_number)
{
	char *token; /*str that returns strtok */
	instruction_t *f = NULL;

	token = strtok(s, DELIMITERS);
	if (token == NULL || *token == ' ' || *token == '\n')
		exit(EXIT_FAILURE);
	f = (get_op_func(token));
	if (f)
		f->f(stack, line_number);
	else
	{
		printf("L%d: unknown instruction %s\n",
		       line_number, token);
		free(f);
		free(s);
		s = NULL;
		free_list(stack);
		exit(EXIT_FAILURE);
	}
}
