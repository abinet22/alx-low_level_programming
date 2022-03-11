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
int l;
int r;

for(l=0;l<=9;l++)
{
r = l/10;
printf("\n", r);
l++;
}
return (0);
}
