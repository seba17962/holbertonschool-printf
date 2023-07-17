# ifndef _MAIN_
# define _MAIN_
# include <stdarg.h>
# include <unistd.h>


typedef struct types_prints
{
	char *type;
	int (*func)(va_list args);
} func_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int get_func(char format, va_list args);
# endif
