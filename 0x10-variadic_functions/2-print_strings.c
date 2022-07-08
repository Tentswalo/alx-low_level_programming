#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints strings
* @separator: string to be printed
* @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter;
char *p;
va_list myList;

va_start(myList), n);

counter = 0;
while (counter < n)
  {
    p = va_arg(myList, char*);
    if (p == NULL)
      printf("(nil)");
    else
      printf("%s", p);
    if (counter != (n - 1) && separator != NULL)
      printf("%s", separator);
    counter++;
  }
printf("\n");

va_end(myList);
}
