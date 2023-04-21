#include "main.h"

/**
 * stringsit - receives string and all necessary parameters
 *		to print a formated string
 * @format: string
 * @funlist: list of all possible functions
 * @arglist: list of all arguments passed to the program
 *
 * Return: count of characters printed
 */

int stringsit(const char *format, itconverts_t funlist[], va_list arglist)
{
	int x, y, z, printed;

	printed = 0;
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; funlist[y].ops != NULL; y++)
			{
				if (format[x + 1] == funlist[y].ops[0])
				{
					z = funlist[y].fun(arglist);
					if (z == -1)
						return (-1);
					printed += z;
					break;
				}
			}
			if (funlist[y].ops == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
				{
					writeschar(format[x]);
					writeschar(format[x + 1]);
					printed = printed + 2;
				}
				else
					return (-1);
			}
			x = x + 1;
		}
		else
		{
			writeschar(format[x]);
			printed++;
		}
	}
	return (printed);
}
