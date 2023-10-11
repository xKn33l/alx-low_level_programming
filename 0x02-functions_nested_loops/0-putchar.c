#include <unistd.h>

/**
 * main - writes the char _putchar to stdout
 * @c: the character to print
 * Return: On succes 1.
 * On error, -1 is returned and errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
