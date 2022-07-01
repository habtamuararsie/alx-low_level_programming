#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int b)
{
	void *h = malloc(b);
	if (h == NULL)
	{
		exit(98);
	}
	return (h);
}
