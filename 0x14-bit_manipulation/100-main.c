#include <stdio.h>
#include "main.h"
/**
 * main - check code
 * Return: always 0
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("little endian\n");
	}
	else
	{
		printf("big endian\n");
	}
	return (0);
}
