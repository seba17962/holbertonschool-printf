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

			if (format[i] == '%')
				_putchar(format[i]);

			else if (format[i] == 's' || format[i] == 'c' ||
					format[i] == 'i' || format[i] == 'd')
			i += get_func(format[i], args);

			else
				len += get_func(format[i], args);

		}
		i++;
	}

	va_end(args);
	return (i);
}
