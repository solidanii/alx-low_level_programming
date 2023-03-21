#include "main.h"
/**
 * _isalpha - function to print letters
 * @c: parameter to be checked
 * Return: prints 1 if letter prints 0 if not letter
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
