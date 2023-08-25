#include "monty.h"

/**
 * rot_fr - function that rotates to the bottom
 * @head: pointer to the head
 * @counter: number of line in content
 * Return: void
 */
void rot_fr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *mcopy;

	mcopy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (mcopy->next)
	{
		mcopy = mcopy->next;
	}
	mcopy->next = *head;
	mcopy->prev->next = NULL;
	mcopy->prev = NULL;
	(*head)->prev = mcopy;
	(*head) = mcopy;
}
