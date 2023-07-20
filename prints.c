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
 * Return: 1
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * print_str - print a string
 * @args: the string to print
 * Return: the length of the string
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
 * print_int - print a int
 * @args: the int to print
 * Return: the numbers of chars of the int
 */
int print_int(va_list args)
{
	unsigned int i = 0, len = 0, negative = 0;
	long int num = va_arg(args, int), aux = num;
	char *numStr;

	if (num == 0)
		return	(_putchar('0'));
	if (num < 0)
	{
		negative = 1;
		if (num == INT_MIN)
		{
			numStr = "-2147483648";
			while (numStr[i] != '\0')
				len += _putchar(numStr[i++]);
			return (len);
		}
		num = -num;
		len++;
	}
	while (aux != 0)
	{
		aux = aux / 10;
		len++;
	}
	numStr = malloc(len + negative + 1);
	if (numStr == NULL)
		return (-1);
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
