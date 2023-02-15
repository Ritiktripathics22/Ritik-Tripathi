/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter two angles of a triangle\n");
   scanf("%d%d",&a,&b);
   c=180-(a+b);
   printf("third angle of triangle=%d",c);
    return 0;
}
