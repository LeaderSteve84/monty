#include "monty.h"
/**
 * execute_instruction - execute instructions
 * Return: Nothing
 */
void execute_instruction(void)
{
	stack_t *stack = NULL;

	if (arguments->toks_arr == 0)
	{
		return;
	}
	arguments->instruct->f(&stack, arguments->file_line_num);
}
