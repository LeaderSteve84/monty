#include "monty.h"
/**
 */
void free_arguments_node(void)
{
	free(arguments);
}

/**
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
