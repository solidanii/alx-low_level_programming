#include "main.h"
/**
 * _isupper - check if a letter is upper
 * @x: the number to be checked
 * Return: always 0
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
