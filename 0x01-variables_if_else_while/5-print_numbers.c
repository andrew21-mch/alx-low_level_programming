#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

n=0;
while(n < 10)
{
printf("%d",n);
n++;
}
printf("\n");
return (0);
}
