#include <stdio.h>

/**
* myCleanupFun - prints before main function executed
* 
*/
void myCleanupFun(void) _attribute_ ((constructor));

void myCleanupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
