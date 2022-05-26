#include "main.h"
/**
 *print_binary - prints binary values
 *@n: input number
 *Return: binary value of n
 */

void print_binary(unsigned long int n)
{
	int i ,count = 0;
	unsigned long int val;
	for (i = 63; i >= 0; i--)
	{
		val = n >> i;

		if (val & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
		putchar('0');
	}
	if(!count)
		putchar('0');
}
