#include "main.h"
/**
 * _isupper - uppercase letter
 * @c: char to check
 * Return: 0 0r 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
