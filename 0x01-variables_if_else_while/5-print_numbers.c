#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l = 0;
int r;

while (l < 10)
{
r = l * pow(10, 0);
printf("%i", r);
l++;
}
return (0);
}
