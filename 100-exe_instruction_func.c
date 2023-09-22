#include "monty.h"
/**
 * execute_instruction - execute instructions
 * Return: Nothing
 */
void execute_instruction(void)
{

	if (arguments->toks_arr == 0)
	{
		return;
	}
	arguments->instruct->f(&arguments->head, arguments->file_line_num);
}
