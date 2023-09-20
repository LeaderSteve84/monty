#include "monty.h"
#include <stdio.h>
/**
 * fetch_file_content - function that fetch the content of
 * the user inputted file,
 * @user_file:
 * Return:
 */
void fetch_file_content(char *user_file)
{
	int fd;

	fd = open(user_file, O_RDONLY);
	if (fd == -1)
	{
		fetch_failed(user_file);
	}

	arguments->file = fdopen(fd, "r");

	if (arguments->file == NULL)
	{
		close(fd);
		fetch_failed(user_file);
	}
}
