#include "main.h"

/**
 * swap_int - function to swap values contained in two pointers.
 * @a: pointer to one 
 * @b: swapped # 2
 *
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
