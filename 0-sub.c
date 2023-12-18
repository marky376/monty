#include "monty.h"

/**
 * sub - Subtracts the top element of the stack from the second top element.
 * @stack: Pointer to the stack.
 * @line_number: Line number in the file.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}
