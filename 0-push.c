#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *token = strtok(NULL, " \t\n");
	int value;
	stack_t *new_node;

	if (!token)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(token);

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
