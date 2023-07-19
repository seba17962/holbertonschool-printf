# include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_char - print a char
 * @args: the char to print
 * Return: ...
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * print_str - print a string
 * @args: the string to print
 * Return: ...
 */
int print_str(va_list args)
{
	char *arg = va_arg(args, char *);
	unsigned int i = 0;

	if (arg)
	{
		while (arg[i])
		{
			_putchar(arg[i]);
			i++;
		}

		return (i);
	}

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}
/**
 * print_int - ...
 * @args: ...
 * Return: ...
 */
int print_int(va_list args)
{
	unsigned int i = 0, len = 0, negative = 0;
	int num = va_arg(args, int), aux = num;
	char *numStr;

	if (num == 0)
		return	(_putchar('0'));

	while (aux != 0)
	{
		aux = aux / 10;
		len++;
	}

	if (num < 0)
	{
		negative = 1;
		num = -num;
		numStr = malloc(len + 2);
	} else
		numStr = malloc(len + 1);

	while (num > 0)
	{
		numStr[i++] = num % 10 + '0';
		num = num / 10;
	}

	if (negative)
		numStr[i++] = '-';
	numStr[i] = '\0';

	while (i > 0)
		_putchar(numStr[--i]);

	free(numStr);
	return (len);
}
