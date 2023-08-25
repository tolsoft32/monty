#include "monty.h"

/**
 * rot_fl - function that rotate that the stack or queue
 * to the top
 * @head: pointer to the head of the stack
 * @counter: number of line in a content
 * Return: void
 */
void rot_fl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *auxi;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxi = (*head)->next;
	auxi->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = auxi;
}
