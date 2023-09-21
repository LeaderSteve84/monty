#include "monty.h"
/**
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
