# include "main.h"

/**
 * get_func - ...
 * @format: ...
 * @args: ...
 *
 * Return: ...
 */

int get_func(char format, va_list args)
{
	unsigned int i = 0, len = 0;

	func_t types[] = {
		{"c", print_char},
		{"s", print_str}
	};

	while (types[i].type)
	{
		if (*types[i].type == format)
			len = types[i].func(args);

		i++;
	}

	return (len);
}
