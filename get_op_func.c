#include "monty.h"

/**
 * get_op_func - 
 * @s: 
 * Return: 
 */

instruction_t *get_op_func(const char *s)
{
	int i;
	instruction_t *opc;
	instruction_t ops [] = {
		{"push", op_push},
		{"pall", op_pall},
		{NULL, NULL}
/*
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"mod", op_mod},
		{NULL, NULL}
*/
	};

	opc = malloc(sizeof(instruction_t));
	if (opc == NULL)
	{
		fprintf(stdout, "Error: malloc failed");
		free(opc);
		exit(EXIT_FAILURE);
	}

	i = 0;
	while (ops[i].opcode && strcmp(ops[i].opcode, s) != 0)
		i++;

	opc->opcode = ops[i].opcode;
	opc->f = ops[i].f;
	return (opc);
}
