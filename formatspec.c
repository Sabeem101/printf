#include "main.h"

/**
 * printchars - prints character
 * @format: arguments
 *
 * Return: input
 */

int printchars(va_list format)
{
	writeschar(va_arg(format, int));
	return (1);
}

/**
 * printstr - prints a string
 * @format: arguments
 *
 * Return: input
 */

int printstr(va_list format)
{
	char *str;
	int x;

	str = va_arg(format, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (x = 0; str[x] != '\0'; x++)
		writeschar(str[x]);
	return (x);
}

/**
 * printper - prints the percent symbol
 * @format: arguments
 *
 * Return: input
 */

int printper(__attribute__((unused))va_list format)
{
	writeschar('%');
	return (1);
}
