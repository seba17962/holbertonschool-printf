# ifndef _MAIN_
# define _MAIN_
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/**
 * struct types_prints - Struct of formats to print
 * @type: format to print;
 * @func: the function pointer of the specific format
 */

typedef struct types_prints
{
	char *type;
	int (*func)(va_list args);
} func_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int get_func(char format, va_list args);
int validate(char format);
int print_unsigned(va_list args);
int print_binary(va_list args);
# endif
