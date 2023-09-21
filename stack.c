#include "monty.h"

int data;
/**
 */
void push(stack_t **my_stack, unsigned int line_number)
{
	stack_t *new;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		memory_allocation_failed();
	}
	new->n = data;
	new->prev = NULL;
	if (*my_stack != NULL)
	{
		(*my_stack)->prev = new;
	}
	new->next = *my_stack;
	*my_stack = new;
}

/**
 */
void pall(stack_t **my_stack, unsigned int line_number)
{
	stack_t *current = *my_stack;
	(void)line_number;

	if (*my_stack == NULL || my_stack == NULL)
		return;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * pint - Prints the value at the top of the stack
 * @my_stack: The stack
 * @line_number: The current line number
 * 
 * Return: Nothing
 */
void pint(stack_t **my_stack, unsigned int line_number)
{
	stack_t *current = *my_stack;

	if (*my_stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", current->n);
}

/**
 */
void nop(stack_t **my_stack, unsigned int line_number)
{
	(void)my_stack;
	(void)line_number;

	free_arguments_node();
}
