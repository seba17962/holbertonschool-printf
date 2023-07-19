# include "main.h"

int
_printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, len = 0;

	va_start(args, format);

	if (!format)
		return (-1);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
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
				len += _putchar(format[i]);
			else if (validate(format[i]))
				len += get_func(format[i], args);
			else
			{
				len += _putchar(format[--i]);
				len += _putchar(format[++i]);
			}

		}
		i++;
	}

	va_end(args);
	return (len);
}
