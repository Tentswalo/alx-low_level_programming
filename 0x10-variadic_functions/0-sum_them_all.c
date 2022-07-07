#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all parameters
* @n: numbers of integers
*
* Return: Sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int counter, addition = 0;
va_list vaList;

va_start(vaList, n);

for (counter = 0; counter < n; counter++)
addition += va_arg(vaList, int);

va_end(vaList);
return (addition);
}
