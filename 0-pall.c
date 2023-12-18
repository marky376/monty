#include "monty.h"
/**
 * f_pall - prints the stack
 * @stack: stack head
 * @current: no used
 * Return: no return
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *curren = *stack;
	(void) line_number;

	while (curren)
	{
		printf("%d\n", curren->n);
		curren = curren->next;
	}
}
