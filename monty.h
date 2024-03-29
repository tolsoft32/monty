#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - function for doubly linked list representation
 * @arg: the value
 * @file: pointer to file in monty
 * @content: the line content
 * @livi: flag change stack <-> queue
 * Description: the value through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int livi;
} bus_t;

extern bus_t bus;

/* declaring protypes to be used */
char *re_alloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t get_stdin(char **lineptr, int file);
char *line_clean(char *content);
void push_fl(stack_t **head, unsigned int number);
void pall_fl(stack_t **head, unsigned int number);
void pint_fl(stack_t **head, unsigned int number);
int ex_mty(char *content, stack_t **head, unsigned int counter, FILE *file);
void f_stack(stack_t *head);
void pop_fl(stack_t **head, unsigned int counter);
void swap_fl(stack_t **head, unsigned int counter);
void add_fl(stack_t **head, unsigned int counter);
void nop_fl(stack_t **head, unsigned int counter);
void sub_fl(stack_t **head, unsigned int counter);
void div_fl(stack_t **head, unsigned int counter);
void mul_fl(stack_t **head, unsigned int counter);
void mod_fl(stack_t **head, unsigned int counter);
void putch_fl(stack_t **head, unsigned int counter);
void putstr_fl(stack_t **head, unsigned int counter);
void rot_fl(stack_t **head, unsigned int counter);
void rot_fr(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void queue_fl(stack_t **head, unsigned int counter);
void stack_fl(stack_t **head, unsigned int counter);

#endif /*ending monty heading */
