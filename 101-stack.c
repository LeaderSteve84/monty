#include "monty.h"

/**
 * push - insert integr valu at the begining of a stack
 * @my_stack: newly created stack
 * @line_number: line number in the file
 * Return: Nothing
 */
void push(stack_t **my_stack, unsigned int line_number)
{
	if (arguments->toks_num < 1 || !(check_string(arguments->toks_arr[1])))
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

	if (arguments->head != NULL)
	{
		(*my_stack)->next = arguments->head;
		arguments->head->prev = *my_stack;
	}
	arguments->head = *my_stack;
	arguments->top += 1;
}
/**
 * check_string - check if string is a valid integer
 * @string: string to check
 * Return: an integer value
 */
int check_string(char *string)
{
	int i = 0;

	while (string[i])
	{
		if (i == 0 && string[i] == '-' && string[i + 1])
		{
			i++;
			continue;
		}
		if (string[i] < '0' || string[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * pall - function to print the data in stack
 * @my_stack: new created stack
 * @line_number: line number in file
 * Return: Nothing
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
 * nop - do nothing
 * @my_stack: new created stack
 * @line_number: current line number in file
 * Return: Nothing
 */
void nop(stack_t **my_stack, unsigned int line_number)
{
	(void)my_stack;
	(void)line_number;
}
