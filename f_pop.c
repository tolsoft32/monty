#include "monty.h"

/**
 * pop_fl - function that print the top of stack
 * @head: pointer to head of stack
 * @counter: number of line in a content of stack
 * Return: void
 */
void pop_fl(stack_t **head, unsigned int counter)
{
	stack_t *hd;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	*head = hd->next;
	free(hd);
}

