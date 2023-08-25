#include "monty.h"

/**
 * mul_fl - function that multiplies top of two elements
 * of the stack
 * @head: pointer to the head of stack
 * @counter: number of line in the content
 * Return: void
 */
void mul_fl(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int length = 0;
	int auxi;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack is too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	auxi = hd->next->n * hd->n;
	hd->next->n = auxi;
	*head = hd->next;
	free(hd);
}
