#include "monty.h"
/**
 * mul - function that multiplies the second top
 * element of the stack with the top element of the stack.
 * The result is stored in the second top element of the stack,
 * and the top element is removed, so that at the end:
 * The top element of the stack contains the result
 * The stack is one element shorter
 * @head: pointer to the first node
 * @line_number: file line number
 * Return: Nothing
 */
void mul(stack_t **head, unsigned int line_number)
{
	int a, b, mult;
	stack_t *current;

	current = *head;

	if (current == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free(arguments->instruct);
		free_toks_arr();
		exit(EXIT_FAILURE);
	}
	else
	{
		a = current->n;
		b = current->next->n;
		mult = a * b;
		current->next->n = mult;

		if (current->next->next == NULL)
		{
			*head = current->next;
			current->next->prev = NULL;
			current->next->next = NULL;
			free(current);
		}
		if (current->next->next != NULL)
		{
			*head = current->next;
			current->next->prev = NULL;
			free(current);
		}

	}
}
