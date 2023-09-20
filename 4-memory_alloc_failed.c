#include "monty.h"
#include <stdio.h>
/**
 */
void memory_allocation_failed(void)
{
	dprintf(STDERR_FILENO, "Error: malloc failed\n");
	free_arguments_node();
	exit(EXIT_FAILURE);
}
