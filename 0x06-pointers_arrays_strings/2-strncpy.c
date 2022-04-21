#include "main.h"
/**
 *_strncpy _ copies a string
 *@dest: A pointr to a character that will change
 *@src: A pointer to a character that will change
 *@n; Value
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)

{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);

}
