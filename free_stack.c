#include "monty.h"
/**
 * free_stack - frees a doubly linked list
 * @stack: head of the stack
 */

void free_stack(stack_t *stack)
{
	stack_t *tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
