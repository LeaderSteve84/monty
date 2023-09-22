#include "monty.h"
/**
 * free_lists - free all nodes in the list
 * Return: Nothing
 */
void free_lists(void)
{
	stack_t *current, *temp;

	if (arguments->head == NULL)
	{
		return;
	}
	current = arguments->head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
