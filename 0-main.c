#include "monty.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 */
args *arguments = NULL;

int main(int argc, char **av)
{
	size_t num = 0;
	ssize_t num_of_read;

	check_num_of_argument(argc);
	initialize_arguments_node();
	fetch_file_content(av[1]);
	num_of_read = getline(&arguments->line_buffer, &num, arguments->file);
	if (num_of_read == -1)
	{
		dprintf(2, "getline function failed\n");
	}
	printf("%s\n", arguments->line_buffer);

	return (0);
}
