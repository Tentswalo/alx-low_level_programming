#include <stdio.h>
/**
 * main -Prints the alphabet except the letter q and e.
(*
* Return: Always 0 (Success)
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
