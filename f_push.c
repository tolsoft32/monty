#include "monty.h"

/**
 * push_fl - function that node to the stack
 * @head: pointer to the head of the stack
 * @counter: number of line in a content of stack
 * Return: void
 */
void push_fl(stack_t **head, unsigned int counter)
{
	int x, y = 0;
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || bus.arg[y] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			f_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = atoi(bus.arg);
	if (bus.livi == 0)
		add_node(head, x);
	else
		add_queue(head, x);
}
