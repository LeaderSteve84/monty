#include "monty.h"
#include <stdio.h>
/**
 * check_num_of_argument - function check if the user does not give
 * any file or more than one argument to your program
 * @argc:
 * Return:
 */
void check_num_of_argument(int argc)
{
	if (argc == 1 || argc > 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
