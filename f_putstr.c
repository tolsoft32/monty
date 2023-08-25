#include "monty.h"

/**
 * putstr_fl - function that put string at the starting
 * at the top of the stack
 * @head: pointer to head of the stack
 * @counter: number of line in the content of stack
 * Return: void
 */
void putstr_fl(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
