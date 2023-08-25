#include "monty.h"

/**
 * pall_fl - function that print the stack
 * @head: pointer to head of the stack
 * @counter: line counter
 * Return: void
 */
void pall_fl(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
