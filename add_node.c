#include "monty.h"

/**
 * add_node - function that add node to the stack
 * @head: head of the stack
 * @n: the new value
 * Return: void
 */
void add_node(stack_t **head, int n)
{
	stack_t *later_node, *auxi;

	auxi = *head;
	later_node = malloc(sizeof(stack_t));
	if (later_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (auxi)
		auxi->prev = later_node;
	later_node->n = n;
	later_node->next = *head;
	later_node->prev = NULL;
	*head = later_node;
}
