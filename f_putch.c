#include "monty.h"

/**
 * putch_fl - function that print character at the top
 * of the stack
 * @head: pointer to the head of the stack
 * @counter: number of line in a content
 * Return: void
 */
void putch_fl(stack_t **head, unsigned int counter)
{
	stack_t *hd;

	hd = *head;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't putch, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't putch, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
