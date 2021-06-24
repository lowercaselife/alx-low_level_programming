#include "holberton.h"

/**
 * more_numbers - prints ten times the numbers from 0-14.
 */

void more_numbers(void)
{
	int i;
	char ch;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchat((c % 10) + '0');
		}
		_purchar ('\n');
	}
}
