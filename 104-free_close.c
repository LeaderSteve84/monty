#include "monty.h"
/**
 * freeMemory_closeFile - function that free all
 * allocated memory and close file if <int> is not an
 * integer or if there is no argument given to push
 * Return: Nothing
 */
void freeMemory_closeFile(void)
{
	if (arguments->file != NULL)
	{
		if (fclose(arguments->file) == EOF)
		{
			fprintf(stderr, "Error closing the file.\n");
		}
	}
	if (arguments->head != NULL)
	{
		free_arguments_node();
	}
	if (arguments->instruct != NULL)
	{
		free(arguments->instruct);
	}
	if (arguments->toks_arr != NULL)
	{
		free_toks_arr();
	}
}
