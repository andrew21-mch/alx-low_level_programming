#include "holberton.h"
#include<stdio.h>

int main(int argc __attribute__((unused)), char *argv)
{
    /* main - prints program's name follwed by newline
    * @argc: The number of command line arguments
    * @argv: An array containing the program command line arguments
    *
    * Return: always (0)
    */
    printf("%s",argv[1]);
    return 0;
}