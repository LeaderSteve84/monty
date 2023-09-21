#include "monty.h"

/**
 */
void tokenize(args *arguments, unsigned int line_number)
{
	char *command, *command2;
	stack_t **my_stack = NULL;
	int data, i = 0, flag = 0;
	instruction_t codes_array[5] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"nop", nop},
		{NULL, NULL},
	};
	
	command = strtok(arguments->read, " ");
	command2 = strtok(NULL, " ");
	data = atoi(command2);

	while (codes_array[i].opcode != NULL)
	{
		if (_strcmp(command, codes_array[i].opcode) == 0)
		{
			codes_array[i].f(my_stack, line_number);
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, command);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
}
