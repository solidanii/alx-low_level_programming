#include "main.h"
/**
 * _isdigit - function that checks digit
 * @x: the number to be checked
 * Return: always 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
