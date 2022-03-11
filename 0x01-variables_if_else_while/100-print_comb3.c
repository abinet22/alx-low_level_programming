#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i,l,x;

	i = 48;
    l = 48;
    x = 0;
	while  (i < 58)
	{
    x++;
    while (l < 58)
	{
        putchar(i);
        putchar(l);
       	if (l !=  57)
		{
          	putchar(44);
			putchar(32);
			
		}
	    l++;
    }
       l = 48 + x;
       i++;
	}
	putchar('\n');

	return (0);
}
