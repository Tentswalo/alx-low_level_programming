#include "main.h"
/**
* main - prints the alphabets, in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
print_alphabet();
_putchar(n);
}
_putchar('\n');
return (0);
}
