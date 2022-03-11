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
int l = 0;

while (l < 10)
{
putchar(l,", ");
l++;
}
putchar('\n');
return (0);
}
