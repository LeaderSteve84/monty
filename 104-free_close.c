#include "monty.h"
/**
 * freeMemory_closeFile - function that free all
 * allocated memory and close file if <int> is not an
 * integer or if there is no argument given to push
 * Return: Nothing
 */
void freeMemory_closeFile(void)
{
	close_file();
	if (arguments->head != NULL)
	{
		free_arguments_node();
	}
	free(arguments->instruct);
	free_toks_arr();
}
