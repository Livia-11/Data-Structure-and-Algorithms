#include <stdio.h>
void foo1(int xval) 
{
 int *x;
 *x = xval;
 
 printf("The address of x is: %c", x);
 printf("The value of x is: %c", *x);
 /* print the address and value of x here */
}
void foo2(int dummy) 
{
 int y;
 
 /* print the address and value of y here */
}
int main() 
{
 foo1(7);
 foo2(11);
 return 0;
}
