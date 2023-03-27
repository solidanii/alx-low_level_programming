#include "main.h"
/**
 * main - check code
 * Return: always 0
 */

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "first, solve the problem. then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
