#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the characer c to stdout
 * @c: the character to print
 * Return: on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
