#include "main.h"

/**
 * swap_int - function to swap values contained in two pointers.
 * @a: pointer to one int.
 * @b: pointer to second int.
 *
 *Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
