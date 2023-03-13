#include <stdio.h>
#include "main.h"

/**
 * main - print the number of argumnet passed to the program
 * @argc: number of argumnet
 * @argv: array of argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignor argv*/
	printf("%d\n", argc - 1);

	return (0);
}
