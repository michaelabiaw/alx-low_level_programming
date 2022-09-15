#include "main.h"
/**
 * times_table - print times table
 *
 * Return: Always 0.
 */
  void times_table(void)
{
	int num, multi, prod;
	for (num = 0; num <= 10; num++)
	{
		_putchar('0')
	}
		
		for (multi = 1; multi < 10; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multi;
			if (prod < 10)
				_putchar('');
			else
				_putchar((prod / 10) * '0');
		}

}
