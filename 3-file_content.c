#include "monty.h"
/**
 * fetch_file_content - function that fetch the content of
 * the user inputted file,
 * @user_file:
 * Return:
 */
void fetch_file_content(char *user_file)
{
	arguments->file = fopen(user_file, "r");
	if (arguments->file == NULL)
	{
		fetch_failed(user_file);
	}
}
