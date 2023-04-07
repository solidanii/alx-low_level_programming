#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed to program
 * @argc: number of argments
 * @argv: array arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
