#include "monty.h"

/**
 * tokenize - tokenizes a string
 * @s: string that will be tokenized
 * Return: tokenized tokens
 */

char *tokenize(char *s)
{
	char *token; /*str that returns strtok */

	if (s == NULL)
		return (NULL);
	token = strtok(s, DELIMITERS);
	return (token);
}
