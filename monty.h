#ifndef MONTY_H
#define MONTY_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack
 * @n: integer
 * @prev: points to the previous element of the stack
 * @next: points to the next element of the stack
 *
 * Description: doubly linked list node structure for stack
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
 * Description: opcode and its function for stack
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Monty opcode functions */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);

/* Utility functions */
void free_stack(stack_t *stack);
void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number);
void monty_error(char *msg, unsigned int line_number);

#endif /* MONTY_H */

