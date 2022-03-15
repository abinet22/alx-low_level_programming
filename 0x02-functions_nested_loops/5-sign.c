#include "main.h"

/**
 * print_sign - Checks if a character is alpha.
 * @n: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
_putchar('+');
_putchar(',');
_putchar(' ');
_putchar('\n');
return(1);
else if (n = 0)
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar('\n');
return(0);
else if (n < 0)
_putchar('-');
_putchar(',');
_putchar(' ');
_putchar('\n');
return (-1);


}
