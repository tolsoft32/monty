#include "monty.h"

/**
 * queue_fl - functions that print the top of a queue
 * @head:  pointer to the header of a queue
 * @counter: number of line of content in a queue
 * Return: void
 */
void queue_fl(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.livi = 1;
}

/**
 * add_queue - function that node to the rear of the queue
 * @n: the new valued added to queue
 * @head: pointer to head of queue
 * Return: void
 */
void add_queue(stack_t **head, int n)
{
	stack_t *later_node;
	stack_t *auxi;

	auxi = *head;
	later_node = malloc(sizeof(stack_t));
	if (later_node == NULL)
	{
		printf("Error\n");
	}
	later_node->n = n;
	later_node->next = NULL;
	if (auxi)
	{
		while (auxi->next)
			auxi = auxi->next;
	}
	if (!auxi)
	{
		*head = later_node;
		later_node = NULL;
	}
	else
	{
		auxi->next = later_node;
		later_node->prev = auxi;
	}
}
