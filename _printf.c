#include "main.h"

/**
 * _printf - receives string and all necessary parameters
 *		to print a formated string
 * @format: string
 * Return: count of characters printed
 */

int _printf(const char *format, ...)
{
	int printed;
	itconverts_t funlist[] = {
		{"c", printchars},
		{"s", printstr},
		{"%", printper},
	};
	va_list arglist;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arglist, format);
	/* calling the stringsit function */
	printed = stringsit(format, funlist, arglist);
	va_end(arglist);
	return (printed);
}
