#include<stdio.h>
void before_main() __attribute__((constructor));
/* befor_main -printes befor main mthod is excuted
 * Return: void
 */
void before_main()
{
   printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

