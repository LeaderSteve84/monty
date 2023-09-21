#include "monty.h"

/**
 *
 */
void push(stack_t **my_stack, unsigned int line_number)
{
	char *endptr;

	if (arguments->toks_num <= 1 || !(strtol(arguments->toks_arr[1], &endptr, 10)))
	{
		free_arguments_node();
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	*my_stack = malloc(sizeof(stack_t));
	if (*my_stack == NULL)
	{
		memory_allocation_failed();
	}
	(*my_stack)->n = (int)atoi(arguments->toks_arr[1]);
	(*my_stack)->prev = NULL;
	(*my_stack)->next = NULL;

	if (*my_stack != NULL)
	{
		(*my_stack)->next = arguments->head;
		arguments->head->prev = *my_stack;
	}
	arguments->head = *my_stack;
	arguments->top += 1;
}

/**
 */
void pall(stack_t **my_stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	(void)my_stack;

	if (arguments->head == NULL)
		return;
	current = arguments->head;
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
	(void)my_stack;
	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", arguments->head->n);
}

/**
 */
void nop(stack_t **my_stack, unsigned int line_number)
{
	(void)my_stack;
	(void)line_number;
}
