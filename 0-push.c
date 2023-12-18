#include "monty.h"
/**
 * f_push - add node to the stack
 * @stack: stack head
 * @line_number: line number
 * Return: no return
 */

void f_push(stack_t **stack, unsigned int line_number)
{
	char *tokn = strtok(NULL, " \t\n");
	int value;
	stack_t *new_node;

	if (!tokn)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = atoi(tokn);

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n =  value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (!stack)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}
