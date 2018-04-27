#include "monty.h"

/**
 * tokenize - tokenizes a string
 * @s: string that will be tokenized
 */
char *tokenize(char *s)
{
	char *token; /*str that returns strtok */
	if (s == NULL)
		return (NULL);
	token = strtok(s, DELIMITERS);
	if (token == NULL || *token == ' ' || *token == '\n')
		return (NULL);
	return (token);
}
