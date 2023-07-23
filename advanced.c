# include "main.h"
# include <stdio.h>
/**
 * print_unsigned - print a unsigned int
 * @args: the int to print
 * Return: the numbers of chars of the unsigned int
 */

int print_unsigned(va_list args)
{
	unsigned int i = 0, len = 0;
	unsigned int num = va_arg(args, unsigned int), aux = num;
	char *numStr;

	if (num == 0)
		return	(_putchar('0'));
	while (aux != 0)
	{
		aux = aux / 10;
		len++;
	}
	numStr = malloc(len + 1);
	if (numStr == NULL)
		return (-1);
	while (num > 0)
	{
		numStr[i++] = num % 10 + '0';
		num = num / 10;
	}
	numStr[i] = '\0';
	while (i > 0)
		_putchar(numStr[--i]);
	free(numStr);
	return (len);
}

int print_binary(va_list args)
{
	unsigned int len = 1, aux = 0, exp = 1, i;
	unsigned int num = va_arg(args, int);
	char *numStr;

	if (num == 0)
		return (_putchar('0'));

	while (exp * 2 <= num)
	{
		exp = exp * 2;
		len++;
	}
	numStr = malloc(len + 1);
	if (numStr == NULL)
		return (-1);

	while (len > 0)
	{
		if (exp <= num)
		{
			numStr[aux++] = '1';
			num = num - exp;
		}
		else
			numStr[aux++] = '0';
		exp = exp / 2;
		len--;
	}
	numStr[aux] = '\0';
	for (i = 0; i < aux; i++)
		_putchar(numStr[i]);
	free(numStr);
	return (aux);
}
