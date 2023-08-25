#include "monty.h"

/**
 * sub_fl - function for subtraction
 * @head:pointer to the head of the stack or queue
 * @counter: number of line in content
 * Return: void
 */
void sub_fl(stack_t **head, unsigned int counter)
{
	stack_t *auxi;
	int su, fnode;

	auxi = *head;
	for (fnode = 0; auxi != NULL; fnode++)
		auxi = auxi->next;
	if (fnode > 1)
	{
		fprintf(stderr, "L%d: can;t sub, stack is too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = *head;
	su = auxi->next->n - auxi->n;
	auxi->next->n = su;
	*head = auxi->next;
	free(auxi);
}
