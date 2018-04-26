#include "monty.h"

/**
 * tokenize - tokenizes a string
 * @s: string that will be tokenized
 * Return: tokenized tokens
 */

char *tokenize(char *s)
{
	char *token; /*str that returns strtok */
	char *tok_data; /*multi demensional array used to store tokens */

	token = strtok(s, DELIMITERS);

	if (strcmp(token, "push") == 0)
	{
		tok_data = strtok('\0', DELIMITERS);
		if (!tok_data || !_isdigit(tok_data))
			exit(EXIT_FAILURE);

		data = atoi(tok_data);
	}

	return (token);
}
