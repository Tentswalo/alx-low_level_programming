#include <stdio.h>

/**
* myCleanupFun - prints before main function executed
* 
* Return: void
*/
void myCleanupFun(void) __attribute__ ((constructor));
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
