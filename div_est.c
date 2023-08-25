#include "monty.h"

/**
 * div_fl - function that divided two top element of stack
 * @head: the stack head
 * @counter: line number count
 * Return: void
 */
void div_fl(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't divide, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	hd = *head;

	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: divided by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = hd->next->n / hd->n;
	hd->next->n = auxi;
	*head = hd->next;
	free(hd);
}
