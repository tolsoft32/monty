#include "monty.h"

/**
 * ex_mty - function that executes opcodes
 * @head: stack head link list
 * @counter: line content number
 * @file: monty file pointer
 * @content: content in file
 * Return: void
 */
int ex_mty(char *content, stack_t **head, unsigned int counter, FILE *file)
{
	instruction_t opstr[] = {
		{"push", push_fl}, {"pall", pall_fl}, {"pint", pint_fl},
		{"pop", pop_fl}, {"swap", swap_fl}, {"add", add_fl},
		{"nop", nop_fl}, {"sub", sub_fl}, {"div", div_fl},
		{"mul", mul_fl}, {"mod", mod_fl}, {"putch", putch_fl},
		{"putstr", putstr_fl},
		{"rotl", rot_fl},
		{"rotfr", rot_fr},
		{"queue", queue_fl},
		{"stack", stack_fl},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *opc;

	opc = strtok(content, "\n\t");
	if (opc && opc[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opstr[i].opcode && opc)
	{
		if (strcmp(opc, opstr[i].opcode) == 0)
		{
			opstr[i].f(head, counter);
			return (0);
		}
		i++;
	}
	if (opc && opstr[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown exec %s\n", counter, opc);
		fclose(file);
		free(content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	return (1);
}
