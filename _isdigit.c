#include "monty.h"

/**
 * _isdigit - checks if element is a digit
 * @tok_data: tokenized data
 * Return: 1
 */

int _isdigit(const char *tok_data)
{
	if (!tok_data)
		return (0);
	if (*tok_data == '-')
		tok_data++;
	while (*tok_data != '\0')
	{
		if (!isdigit(*tok_data))
			return (0);
		tok_data++;
	}
	return (1);
}
