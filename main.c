#include "monty.h"

/**
 * main - main file for program
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	char *buffer = NULL;/* *token = NULL;*/
	size_t buffsize = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r"); /* opens an reads */
	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		free_list(&stack);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &buffsize, fd) != -1)
	{
		line_number++;
		if (*buffer != '\n')
			tokenize(buffer, &stack, line_number);
	}
	free(buffer);
	fclose(fd);
	free_list(&stack);
	return (EXIT_SUCCESS);
}
