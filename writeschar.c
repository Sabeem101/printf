#include "main.h"

/**
 * writeschar - writes character
 * @c: printed character
 *
 * Return: 0 on success, -1 on error
 *		and errno is set appropriately
 */

int writeschar(char c)
{
	return (write(1, &c, 1));
}
