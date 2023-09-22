#include "monty.h"

/**
 * mod - Finds the remainder of first two data on the stack and pops
 * @head: The whole stack
 * @line_number: The current line
 * Return: Nothing
 */

void mod(stack_t **head, unsigned int line_number)
{
	int node_count = 0, result;
	stack_t *temp = *head, *current = *head;

	if (*my_stack == NULL || my_stack == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
	while (temp != NULL)
	{
		node_count++;
		temp = temp->next;
	}
	if (node_count < 2)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
	else
	{
		if (current != NULL && current->next != NULL)
		{
			if (current->n == 0)
			{
				fprintf(stderr, "L%u: division by zero\n", line_number);
				free_arguments_node();
				exit(EXIT_FAILURE);
			}
			result = current->next->n % current->n;
			current->next->n = result;
			*head = current->next;
			current->next->prev = NULL;
			free(current);
		}
	}
}
