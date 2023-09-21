#include "monty.h"
/**
 * initialize_arguments_node - function that initialize
 * the arguments node members to NULL
 * Return:
 */
void initialize_arguments_node(void)
{
	arguments = malloc(sizeof(args));
	if (arguments == NULL)
	{
		memory_allocation_failed();
	}
	arguments->file = NULL;
	arguments->toks_num = 0;
	arguments->file_line_num = 0;
}
