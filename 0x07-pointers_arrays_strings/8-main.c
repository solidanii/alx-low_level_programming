#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * Return: always 0
 */
int main(void)
{
	int c3[3][3] = {{0, 1, 5}, {10, 11, 12}, {1000, 101, 102},};
	int c5[5][5] = {{0, 1, 5, 12124, 1234}, {10, 11, 12, 123521, 12512}, {100, 12401, 10452, 11542545, 1214543435},};
	print_diagsum((int *)c3, 3);
	print_diagsum((int *)c5, 5);
	return (0);
}
