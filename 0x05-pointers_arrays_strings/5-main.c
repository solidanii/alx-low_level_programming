#include "main.h"
/**
 * main - check the code
 * Return: always 0
 */

int main(void)
{
	char s[10] = "my school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
