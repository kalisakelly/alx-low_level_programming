include "main.h"

/**
 * swap_int - function to swap values contained in two pointers.
 * @a: swapped # 1
 * @b: swapped # 2
 *
 *Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int swaper;

swaper = *a;
*a = *b;
*b = swaper;
}
