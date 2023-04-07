#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it.
 *
 * @argc: Number of Arguments.
 * @argv: Arrays of arguments
 *
 * Return: Always return(0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return 0;
}
