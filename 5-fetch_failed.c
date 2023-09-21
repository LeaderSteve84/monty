#include "monty.h"
/**
 */
void fetch_failed(char *user_file)
{
	fprintf(stderr, "Error: Can't open file %s\n", user_file);
	free_arguments_node();
	exit(EXIT_FAILURE);
}
