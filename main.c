#include "monty.h"

/**
 * main - main file for program
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */

int data;

int main(int argc, char* argv[])
{
	char *buffer = NULL;
	size_t buffsize = 0;
	FILE *fd;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	instruction_t *f = NULL;
	char *token = NULL;


	if (argc != 2)
	{
		fprintf(stdout, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r"); /* opens an reads */


	if (fd == NULL)
/*		fprintf(stdout, "Error: Can't open file %s", argv[1]);
*/		exit(EXIT_FAILURE);

	while (getline(&buffer, &buffsize, fd) != -1)
	{
		line_number++;
		if (*buffer == '\n')
			continue;
		token = tokenize(buffer);
		if (token == NULL)
			continue;
		f = (get_op_func(token));
		if (f == NULL)
			free(f);

		if (f->f)
			f->f(&stack, line_number);
	}
	free(buffer);
	free(f);
	free_list(stack);
	return (0);
}
