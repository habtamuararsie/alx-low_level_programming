#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdff.h>
/**
 * malloc_checked - creates an array of integers.
 * @b: input.
 * Retun: output.
 */
void *malloc_checked(unsinged int b)
{
	void *h = malloc(b);
	if (h == NULL)
	{
		exit(98);
	}
	return (h);
}
