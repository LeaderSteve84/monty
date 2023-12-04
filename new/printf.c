#include "main.h"

/**
 * _printf - My own printf function
 * @format: Contains the format specifiers
 *
 * Return: The _printf count, 0 (success)
 */

int _printf(const char *format, ...)
{
	int printer = 0;
	char *s, c;
	va_list var;

	va_start(var, format);
	while (format && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(var, int);
					printer += write(1, &c, 1);
					break;
				case 's':
					s = va_arg(var, char *);
					if (s != NULL)
					{
						printer += write(1, s, _strlen(s));
						break;
					}
					printer += write(1, "(null)", sizeof("(null)") - 1);
					break;
				case '%':
					printer += write(1, "%", 1);
					break;
				default:
					printer += write(1, "%", 1);
					printer += write(1, format, 1);
					break;
			}
		}
		else
			printer += write(1, format, 1);
		format++;
	}
	va_end(var);
	return (printer);
}

/**
 * _strlen - Returns the length of a string
 * @str: The string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
