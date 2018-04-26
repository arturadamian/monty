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
	char *buffer;
	size_t buffsize;
	FILE *fd;
	unsigned int line_number;
	stack_t *stack = NULL;
	instruction_t *f;
	char *token = NULL;

	printf("got here 2?");
	if (argc != 2)
	{
		fprintf(stdout, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r"); /* opens an reads */
	printf("got here 3?");

	if (fd == NULL)
		fprintf(stdout, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);

	line_number = 0;
	buffsize = 0;
	buffer = NULL;

	while (getline(&buffer, &buffsize, fd) != -1)
	{
		line_number++;
		token = tokenize(buffer);
		f = (get_op_func(token));
		if(f->f)
			f->f(&stack, line_number);
	}
	return (0);
}
