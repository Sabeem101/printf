#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char *s;
	char c;

	c = 'H';
	s = "hello teammate";

	c = _printf("%c, %s\n", c, s);
	return (0);
}
