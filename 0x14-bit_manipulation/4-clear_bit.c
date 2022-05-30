#include "main.h"
/**
  * clear_bit - function that sets the value of a bit to 0 at a given index
  * @n: pointer of an unsigned long int
  * @index: index of a bit
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v;

	if (index > 63)
		return (-1);

	v = 1 << index;

	if (*n & v)
		*n ^= v;

	return (1);
}
