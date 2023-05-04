#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @n: number of _ to be printed
 * @size: size of the square
 * Return: void
 */
void print_square(int )
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}

