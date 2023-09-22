#include "monty.h"
/**
 * memory_allocation_failed - malloc failed
 * Return: Nothing
 */
void memory_allocation_failed(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_arguments_node();
	exit(EXIT_FAILURE);
}
