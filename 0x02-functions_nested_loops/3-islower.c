#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to check
 * Return: 1 for lowercase or 0
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
