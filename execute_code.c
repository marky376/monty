#include "monty.h"
/**
 * execute_opcode - executes the opcode
 * @opcode: line content
 * @stack: head linked list
 * @current: line counter
 * Return: no return
 */

void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	if (strcmp(opcode, "push") == 0)
		f_push(stack, line_number);
	else if (strcmp(opcode, "pall") == 0)
		f_pall(stack, line_number);
	else if (strcmp(opcode, "pint") == 0)
		f_pint(stack, line_number);
}
