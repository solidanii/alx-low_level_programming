#include "main.h"
/**
 * more_numbers - print 10 times the number since 0 up to 14
 * RETURN: 10 times of the numbers since 0 up to 10
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}

}
