#include "main.h"
/**
 *swap_int - swap value of two integers a and b
 *@a: A pointer to an int that will be updated
 *@b: B pointer to and int tht will be updated
 *Return: void that means our answer is correct
 */

void swap_int(int *a, int *b)
{
int s;

s = *a;
*a = *b;
*b = s;
}
