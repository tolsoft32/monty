#include "monty.h"

/**
 * pint_fl - functions that print top stack
 * @head: pointer to head of the stack
 * @counter: number of line a content
 * Return: void
 */
void pint_fl(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
