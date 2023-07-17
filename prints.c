# include "main.h"
# include <stdio.h>

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
	unsigned int i = 0, len = 0;
	int num = va_arg(args, int);
	int aux = num;
	char *numStr;

	while (aux != 0)
	{
		aux = aux / 10;
		len++;
	}
	numStr = malloc(len + 1);

	if (num >= 0)
	{
		while (num >= 0)
		{
			numStr[i] = num % 10 + '0';
			num = num / 10;
			i++;
		}
	}

	numStr[i] = '\0';
	rev_string(numStr);
	i = 0;
	while (numStr[i])
	{
		_putchar(numStr[i]);
		i++;
	}

	return (len);
}

void rev_string(char *s)
{
	int len;
	int head;
	char tmp;

	for (len = 1; s[len]; len++)
	{}

	for (head = 0; head < len; head++, len--)
	{
		tmp = s[len - 1];
		s[len - 1] = s[head];
		s[head] = tmp;
	}
}
