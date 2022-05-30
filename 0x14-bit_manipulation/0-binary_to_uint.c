#include "main.h"
/**
  * binary_to_uint -  function that converts a binary number to
  *an unsigned int
  * @b: a pointer that points to a string of 0 and 1 chars
  * Return: the converted number, or 0 if there is
  *one or more chars in the string b that is not 0 or 1 if b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 1, i = 0;
	int c, len = 0;

	if (!b)
		return (0);
	while (b[len] != '\0')
		len++;
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += n;
		}
		n *= 2;
	}
	return (i);
}
