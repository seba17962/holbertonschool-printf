# include "main.h"

int
_printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int len = 0;


	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			i += _putchar(format[len]);
			len += _putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			while (format[i] == ' ')
				i++;

			if (format[len] == '%')
				_putchar(format[len]);
			else if (format[len] == 's' || format[len] == 'c')
			i += get_func(format[len], args);

			if (format[i] == '%')
				_putchar(format[i]);
			else
				len += get_func(format[i], args);

		}
		i++;
	}

	va_end(args);
	return (i);
}
