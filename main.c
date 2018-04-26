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
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r"); /* opens an reads */


	if (fd == NULL)
	{
		printf("Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &buffsize, fd) != -1)
	{
		line_number++;
		if (*buffer == '\n')
			continue;
		token = tokenize(buffer);
		if (token == NULL)
		{
			if (buffer)
				free(buffer);
			buffer = NULL;
			continue;
		}
		f = (get_op_func(token));
/*		if (!f->opcode)
		{
			free(f);
			if (buffer)
				free(buffer);
			buffer = NULL;
			continue;
*/
		if (f->f)
			f->f(&stack, line_number);
		else
		{
			printf("L%d: unknown instruction %s", line_number, token);
			exit(EXIT_FAILURE);
		}
		if (buffer)
			free(buffer);
		buffer = NULL;
		free(f);
	}
	free(buffer);
	free_list(stack);
	fclose(fd);
	return (0);
}
