#include "main.h"

/**
* _strncat - appends first n char from src to dest
*
* @dest: destination array
* @src: source array
* @n: number of characters
*
* Return: dest string
*/

char *_strncat(char *dest, char *src, int n)
{
char *i = dest;

while (*i != 0)
i++;
while (n-- > 0)
*i++ = *src++;
*i = 0;
return (dest);
}
