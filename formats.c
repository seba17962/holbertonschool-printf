# include "main.h"

/**
 * get_func - call a function to print a specific format
 * @format: the format to print
 * @args: list of variadic arguments
 *
 * Return: the int returned of the respective function
 */

int get_func(char format, va_list args)
{
	unsigned int i = 0, len = 0;

	func_t types[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{"b", print_binary},
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
/**
 * validate - function to valid a char
 *
 * @format: the char to validate
 * Return: 1 if format is valid, 0 if not
 */
int validate(char format)
{
	char *validators = "csdiub";
	int i = 0, val = 0;

	while (validators[i])
	{
		if (format == validators[i++])
			val = 1;
	}

	return (val);
}
