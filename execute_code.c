#include "monty.h"

void execute_opcode(char *opcode, stack_t **stack, unsigned int current)
{
	if (strcmp(opcode, "push") == 0)
		f_push(stack, current);
}
