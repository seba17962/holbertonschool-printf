# include "main.h"

int
_printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int len = 0;

	va_start(args, format);
	while (format && format[len])
	{
		if (format[len] != '%')
		{
			i += _putchar(format[len]);
		}
		else
		{
			len++;
			if (format[len] == '\0')
				return (-1);

			while (format[len] == ' ')
				len++;

			if (format[len] == '%')
				_putchar(format[len]);
			else if (format[len] == 's' || format[len] == 'c')
				i +=get_func(format[len], args);
		}
		len++;
	}

	va_end(args);
	return (i);
}
