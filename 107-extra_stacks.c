#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom; that means
 * the last element becomes the top element
 * @head: The whole stack
 * @line_number: The current line
 * Return: Nothing
 */

void rotr(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head, *temp = *head;
	int arr[50] = {0}, i = 0;
	(void)line_number;

	if (*head == NULL || current->next == NULL)
		return;
	while (temp != NULL)
	{
		arr[i] = temp->n;
		temp = temp->next;
		i++;
	}
	i -= 1;
	while (current != NULL && i >= 0)
	{
		current->n = arr[i];
		current = current->next;
		i--;
	}
}
