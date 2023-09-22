#include "monty.h"
/**
 * free_arguments_node - free memory
 * Return: Nothing
 */
void free_arguments_node(void)
{
	free(arguments);
}

/**
 * free_toks_arr - free memory
 * Return: Nothing
 */
void free_toks_arr(void)
{
	int j = 0;

	if (arguments->toks_arr == NULL)
	{
		return;
	}
	while (arguments->toks_arr[j])
	{
		free(arguments->toks_arr[j]);
		j++;
	}
	free(arguments->toks_arr);
	arguments->toks_arr = NULL;

}
