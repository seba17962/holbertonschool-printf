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
    int len;
    int len2;
	int zero = 0;
	int nega = -12;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
   _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len, len);
   _printf("Zero is: %d\n", zero);
   _printf("Negative is: %i\n", nega);

	(void)len2;
	return (0);
}
