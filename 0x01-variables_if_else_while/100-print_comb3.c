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
  
    
    while (l < 58)
	{
        l = i + x;
        putchar(i);
        putchar(l);
      	  
        if (l !=  58)
		{
          	putchar(44);
			putchar(32);
			
		}
        else{
        l++;
        x++;
        }
    }
    i++;
    x++;
     
	}
	putchar('\n');

	return (0);
}
