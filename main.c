#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - function serve as monty code interpreter
 * @argc: number of arguments in function
 * @argv: The monty file vector file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t r_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty files\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if  (!file)
	{
		fprintf(stderr, "Error: file can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		content = NULL;
		r_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (r_line > 0)
		{
			ex_mty(content, &stack, counter, file);
		}
		free(content);
	}
	f_stack(stack);
	fclose(file);
	return (0);
}
