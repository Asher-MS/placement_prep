#include <stdio.h>
 
int main()
{
   int x, y, *a, *b, temp;
 
   x=10;
   y=20;

   
 
   a = &x;
   b = &y;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}