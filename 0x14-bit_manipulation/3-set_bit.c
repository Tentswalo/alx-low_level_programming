#include "main.h"
/**
 * set_bit - sets the value of a bit
 * @n: number
 * @index: index
 *
 * Return: change bit in index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
  unsigned lomg int t_binary;

  t_binary = (sizeof(*(n)) * 8);
  if (index < t_binary)
    {
      *(n) = ((1 << index) | *(n));
      return (1);
    }
  return (-1);
}
