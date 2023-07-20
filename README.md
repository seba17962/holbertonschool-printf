# Project _printf

This is the _printf project, a simplified implementation of the printf function in C.

## Description

The `_printf` function is a simplified version of the printf function in C. It takes a format argument and a variable list of arguments and prints them according to the format specifications.

This project is an academic exercise

## Implemented Functions

The project includes the following functions:

### `int _printf(const char *format, ...)`

This is the main function that simulates the behavior of printf. It takes a format argument and a variable list of arguments and returns the number of characters printed.

### `int _putchar(char c)`

This function is a simplified version of the `putchar` function that prints a single character to the standard output.

### `int print_char(va_list args)`

This function prints a single character.

### `int print_str(va_list args)`

This function prints a string of characters. If the string is NULL, it prints "(null)".

### `int print_int(va_list args)`

This function prints an integer number. If the number is zero, it prints "0". If the number is negative, it prints the sign "-" followed by the absolute number.

### `int get_func(char format, va_list args)`

This function selects the appropriate function to print a specific format. It takes a format character and a variable list of arguments and returns the number of characters printed by the respective function.

### `int validate(char format)`

This function validates if a format character is valid. It returns 1 if the format is valid (c, s, d, or i) and 0 if it is not valid.

