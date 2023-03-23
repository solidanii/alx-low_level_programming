#include "main.h"
/**
 * more_numbers - print 10 times the number since 0 up to 14
 * RETURN: 10 times of the numbers since 0 up to 10
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0 ; x < x < 10; x++)
	{
		for (y = 0 ; y <= 14 ; x++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0' );
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}

}
