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
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	while (types[i].type)
	{
		if (*types[i].type == format)
			len = types[i].func(args);

		i++;
	}

	return (len);
}

int validate(char format)
{
	char *validators = "csdi";
	int i = 0, val = 0;

	while (validators[i])
	{
		if (format == validators[i++])
			val = 1;
	}

	return (val);
}
