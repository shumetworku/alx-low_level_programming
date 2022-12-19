#include "main.h"

/**
 * swap_int - swap the values of two integer
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
