#include <unistd.h>

/**
 * _putchar - writes the charactor c to stdout
 * @c: char to be printed
 * Return: 1 if success
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
