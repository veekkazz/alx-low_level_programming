#include "main.h"

/**
 * _isupper.c - Check if a letter is upper.
 * @x: The number to be checked.
 * Description: main - check the code.
 * Return: 1 for upper or 0 for any else.
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
