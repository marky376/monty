#define _GNU_SOURCE
#include "monty.h"
/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int current = 0;
	stack_t *stack = NULL;
	char *opcode;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		current++;
		opcode = strtok(line, " \t\n");
		if (opcode && opcode[0] != '#')
		{
			execute_opcode(opcode, &stack, current);
		}
	}

	free(line);
	fclose(file);
	free_stack(stack);

	exit(EXIT_SUCCESS);
}
