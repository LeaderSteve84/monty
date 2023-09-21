#include "monty.h"
/**
 */
void fetch_instruction(void)
{
	int i;
	instruction_t instructions[] = {
		{"push", &push}, {"pint", &pint}, {"nop", &nop},
		{"pall", &pall}, {"pop", &pop}, {"swap", &swap},
		{"add", &add}, {NULL, NULL}
	};

	if (arguments->toks_num == 0)
	{
		return;
	}
	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, arguments->toks_arr[0]) == 0)
		{
			arguments->instruct->opcode = instructions[i].opcode;
			arguments->instruct->f = instructions[i].f;
			return;
		}
	}
	instruction_not_valid();	
}

/**
 */
void instruction_not_valid(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", arguments->file_line_num, arguments->toks_arr[0]);
	close_file();
	free_toks_arr();
	free_arguments_node();
	exit(EXIT_FAILURE);
}
