#include "main.h"

/**
 * reset_to_98 -  Takes a pointer to an int as parameter and updates the value it points to to 98.
 * @n: The parameter to be checked.
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
   int n;

n = 402;
_putchar(n);
*n = 98;
_putchar(n);
return(0);
}
