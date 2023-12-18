#include "monty.h"

void f_pall(stack_t **stack, unsigned int current)
{
	stack_t *curren = *stack;
	(void) current;

	while (curren)
	{
		printf("%d\n", curren->n);
		curren = curren->next;
	}
}
