#include "main.h"
/**
 *_strcat - functions concacatenates two strings
 *@dest: input that value changes
 *@src: input that second string
 *Return: dest

*/
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
