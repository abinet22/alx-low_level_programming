#include "main.h"

/**
 * _islower - check the code.
 *
 * Return: Always 0.
 */
int _islower(h)
{
    int r = h;
    int i;
   
    	for (i = 'a'; i <= 'z'; i++)
        {
            if (r == i)
            {
return (1);
            }
        }
	
    
    return (0);
}
