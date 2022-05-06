#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - function that using malloc
 *@b: value to check
 *Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *al;

	al = malloc(b);
	if (al == NULL)
		exit(98);
	else
		return (al);
}
