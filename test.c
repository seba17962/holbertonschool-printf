#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
<<<<<<< HEAD
    int len;
    int len2;
	int zero = -39;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
   _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len, len);
   _printf("Zero is: %d", zero);

	(void)len2;
	return (0);
=======
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	putchar('\n');
	putchar('\n');
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	putchar('\n');
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

return (0);
>>>>>>> a1ee2325aa66ea69122e9f87f4b2ae0447e9a9d8
}
