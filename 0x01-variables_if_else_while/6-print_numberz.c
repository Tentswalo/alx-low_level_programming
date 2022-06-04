#include <stdio.h>
/**
* main -prints numbers from 0-9 without using char or printf/puts,
*and putchar 2x max
(*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
