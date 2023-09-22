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

	if (*head == NULL || head == NULL)
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

/**
 * pchar - Finds the remainder of first two data on the stack and pops
 * @head: The whole stack
 * @line_number: The current line
 * Return: Nothing
 */

void pchar(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;

	if (*head == NULL || head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
	if (current->n >= 32 && current->n <= 127)
	{
		_putchar(current->n);
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
