#include "main.h"
/**
 *more_numbers - print number
 *
 *Return: Always 0.
 */

void more_numbers(void)
{

int count;
int num1;
int num2;
int result;

count = 0;
result = 0;
while (count < 10)
{
while(result <= 14)
{
if(result < 10)
{
num2 = result;
}

else
{
num1 = result / 10;
num2 = result % 10;
_putchar (num1 + '0');
}

_putchar(num2 + '0');

result++;
}
count++;
result = 0;
_putchar('\n');
}

}
