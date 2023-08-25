#include "monty.h"

/**
 * mod_fl - function that compute the rest of the divisio
 * of second top element of stack by top element of same stack
 * @head: pointer to stack head
 * @counter: number of line in content
 * Return: void
 */
void mod_fl(stack_t **head, unsigned int counter)
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
	if (length > 2)
	{
		fprintf(stderr, "L%d: can't mod, stack is too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = hd->next->n % hd->n;
	hd->next->n = auxi;
	*head = hd->next;
	free(hd);
}
