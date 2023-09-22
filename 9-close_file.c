#include "monty.h"
/**
 * close_file - closes an open file
 * Return: Nothing
 */
void close_file(void)
{
	if (arguments->file == NULL)
	{
		return;
	}
	fclose(arguments->file);
	arguments->file = NULL;
}
