#include "monty.h"
#include <stdio.h>
/**
 */
void fetch_failed(char *user_file)
{
	dprintf(stderr, "Error: Can't open file %s\n", user_file);
	free_arguments_node();
	exit(EXIT_FAILURE);
}
