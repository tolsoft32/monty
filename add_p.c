#include "monty.h"

/**
 * add_fl - function that add top two elements of the stack
 * @head: stack header
 * @counter: stack line number counter
 * Return: void
 */
void add_fl(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int length = 0, auxi;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file)
