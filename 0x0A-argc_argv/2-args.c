#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: (0) always
 */
int main(int argc, char *argv[])
{
    for(int i=0; i<=argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
