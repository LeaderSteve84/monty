#include "monty.h"
/**
 * main - Entry point
 * @av: argument vector
 * @argc: argument count
 * Return: 0 successful
 */
args *arguments;


int main(int argc, char **av)
{
	check_num_of_argument(argc);
	initialize_arguments_node();
	fetch_file_content(av[1]);

	while ((fgets(arguments->read, sizeof(arguments->read), arguments->file)) != NULL)
	{
		arguments->file_line_num += 1;
		tokenize_read_line();
		fetch_instruction();
		execute_instruction();
		free_toks_arr();
	}
	close_file();
	free_arguments_node();
	return (0);
}
