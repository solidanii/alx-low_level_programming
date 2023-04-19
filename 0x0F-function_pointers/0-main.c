#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name_as_is - prints a name as is
 * @nmae: name of the person
 * Return: nothing
 */
void print_name_as_is(char *name)
{
	printf("hello, my name is %s\n", name);
}
/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 * Return: nothing
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else 
		{
			putchar(name[i]);
		}
		i++;
	}
}
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
