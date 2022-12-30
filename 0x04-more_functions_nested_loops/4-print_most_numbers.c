#include "main.h"
/**
  * print_most_numbers - Print numbers 0 to 9, excluding 2 and 4.
  * Description: Can only use _putchar twice.
  */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
