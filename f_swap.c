#include "monty.h"

/**
 * swap_fl - function that add the top of two element of stack
 * @head: pointer to the head
 * @counter: number of line in content
 * Return: void
 */
void swap_fl(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap , stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	auxi = hd->n;
	hd->n = hd->next->n;
	hd->next->n = auxi;
}
