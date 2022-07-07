#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
return (0);
}
