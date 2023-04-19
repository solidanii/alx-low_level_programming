#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return
 * : the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return difference
 * @a: first num
 * @b: second num
 * Return: diff b/n a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the product
 * @a: first num
 * @b: second num
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return division
 * @a: first num
 * @b: second num
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return remainder
 * @a: first num
 * @b: second num
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

