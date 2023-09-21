#include "monty.h"

/**
 * pop - Deletes the node at the top of the stack
 * @my_stack: The whole stack
 * @line_number: Current line number
 * 
 * Return: Nothing
 */

void pop(stack_t **my_stack, unsigned int line_number)
{
	stack_t *current = *my_stack;

	if (*my_stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
	*my_stack = current->next;
	if (current->next != NULL)
		current->next->prev = NULL;
	free(current);
}

/**
 * swap - Swaps the first two data on the stack
 * @my_stack: The whole stack
 * @line_number: The current line
 * 
 * Return: Nothing
 */

void swap(stack_t **my_stack, unsigned int line_number)
{
	int node_count = 0, a;
	stack_t *temp = *my_stack, *current = *my_stack;

	if (*my_stack == NULL || my_stack == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
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
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
	else
	{
		a = current->n;
		current->n = current->next->n;
		current->next->n = a;
	}
}

/**
 * add - adds the first two data on the stack and pops
 * @my_stack: The whole stack
 * @line_number: The current line
 * 
 * Return: Nothing
 */

void add(stack_t **my_stack, unsigned int line_number)
{
	int node_count = 0, sum;
	stack_t *temp = *my_stack, *current = *my_stack;

	if (*my_stack == NULL || my_stack == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
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
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		free_arguments_node();
		exit(EXIT_FAILURE);
	}
	else
	{
		sum = current->n + current->next->n;
		current->next->n = sum;
		*my_stack = current->next;
		current->next->prev = NULL;
		free(current);
	}
}
