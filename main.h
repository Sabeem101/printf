#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct itconverts - defines a structure for symbols and functions
 *
 * @ops: operator
 * @fun: function
 */

struct itconverts
{
	char *ops;

	int (*fun)(va_list);
};
typedef struct itconverts itconverts_t;

/* Functions */
int _printf(const char *format, ...);
int writeschar(char);
int stringsit(const char *format, itconverts_t funlist[], va_list arglist);
int printchars(va_list);
int printstr(va_list);
int printper(va_list);

#endif
