#include "monty.h"

/**
 * tokenize - tokenizes a string
 * @s: string that will be tokenized
 */
void tokenize(char *s, stack_t **stack, unsigned int line_number)
{
	char *token; /*str that returns strtok */
	instruction_t *f = NULL;

	token = strtok(s, DELIMITERS);
	if (token == NULL || *token == ' ' || *token == '\n')
		return;
	f = (get_op_func(token));
	if (!f->opcode)
	{
		printf("L%d: unknown instruction %s\n",
		       line_number, token);
		free(f);
		if (s)
			free(s);
		if (stack)
			free_list(stack);
		exit(EXIT_FAILURE);
	}
	if (f->f)
		f->f(stack, line_number);
}
