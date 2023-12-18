#include "monty.h"
/**
 * execute_opcode - executes the opcode
 * @opcode: line content
 * @stack: head linked list
 * @current: line counter
 * Return: no return
 */

void execute_opcode(char *opcode, stack_t **stack, unsigned int current)
{
	if (strcmp(opcode, "push") == 0)
		f_push(stack, current);
	else if (strcmp(opcode, "pall") == 0)
		f_pall(stack, current);
}
