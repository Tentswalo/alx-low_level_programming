#include "main.h"

/**
* clear_bit - sets the value of a bit to 0
* @n: number to set
* @index: index at which to set bit
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index < sizeof(uunsigned long int) * 8)
{
*n &= (~(1 << index));
return (1);
}
return (-1);
}
