#include "monty.h"

/**
 * f_stack - function that free doublely link list
 * @head: stack header
 * Return: nothing
 */
void f_stack(stack_t *head)
{
	stack_t *auxi;

	auxi = head;
	while (head)
	{
		auxi = head->next;
		free(head);
		head = auxi;
	}
}
