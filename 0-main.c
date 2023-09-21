#include "monty.h"
/**
 * main - Entry point
 * @av: argument vector
 * @argc: argument count
 * Return: o successful
 */
args *arguments;


int main(int argc, char **av)
{
	size_t num = 0;

	(void)num;
	check_num_of_argument(argc);
	initialize_arguments_node();
	fetch_file_content(av[1]);


	while ((fgets(arguments->read, sizeof(arguments->read), arguments->file)) != NULL)
	{
		printf("%s", arguments->read);
	}
	fclose(arguments->file);
	free_arguments_node();
	return (0);
}
