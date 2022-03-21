#include "main.h"

/**
 * reset_to_98 -  Takes a pointer to an int as parameter and updates the value it points to to 98.
 * @n: The parameter to be checked.
 *
 * Return: 0.
 */
void reset_to_98(int *n)
{
int c = 98;
*n=&c;
return (0);
}
