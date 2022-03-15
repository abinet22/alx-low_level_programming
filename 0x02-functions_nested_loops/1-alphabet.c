#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char l;

	l = 'a';
	while (l <= 'z')
	{
	_putchar(l);
		l++;
	}
	_putchar('\n');
    print_alphabet();
    return (0);
}
