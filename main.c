#include "monty.h"

/**
 * main - main file for program
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *buffer = NULL;
	size_t buffsize = 0;
	FILE *fd;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	instruction_t *f = NULL;
	char *token = NULL;

	/* checks for correct amount of arguments */
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/* opens and reads file */
	fd = fopen(argv[1], "r");


	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/* */
	while (getline(&buffer, &buffsize, fd) != -1)
	{
		line_number++;

		token = tokenize(buffer);
		if (token == NULL)
		{
			if (buffer)
				free(buffer);
			buffer = NULL;
			continue;
		}

		if (token[0] == '#' || *buffer == '\n')
			continue;

		if (strcmp("queue", token) == 0)
		{
			data = 1;
			continue;
		}
		if (strcmp("stack", token) == 0)
		{
			data = 0;
			continue;
		}
		f = (get_op_func(token));
		if (!f->opcode)
		{
			printf("L%d: unknown instruction %s\n",
			       line_number, token);
			free(f);
			if (buffer)
				free(buffer);
			buffer = NULL;
			exit(EXIT_FAILURE);
		}
		if (f->f)
			f->f(&stack, line_number);

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
