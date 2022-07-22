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
  unsigned long in t_binary;

  t_binary = (sizeof(*(n)) * 8);
  if (index < t_binary)
    {
      *(n) = (~(1 << index) & *(n));
      return (1);
    }
  return (-1);
}
