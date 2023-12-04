#include "shell.h"

/**
 * _isdigit - Checks for numbers
 * @c: number to be checked
 *
 * Return: 1 if true, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/**
 * _isalpha - Checks for aplha characters
 * @c: char to be checked
 *
 * Return: 1 if true, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * check_spaces - Function checks for space in a string
 * @str: The string from getline
 *
 * Return: A string pointer
 */

char *check_spaces(char *str)
{
	while (*str != '\n')
	{
		if ((_isalpha(*str) == 1) || *str == '/')
			return (str);
		if (*(str + 1) == '\n')
			return (NULL);
		str++;
	}
	return (str);
}
