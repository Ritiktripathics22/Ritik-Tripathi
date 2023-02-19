/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  float a,area;
  printf("enter side of triangle :-");
  scanf("%f",&a);
  area=(sqrt(3)/4)*a*a;
  printf("%f",area);
  return 0;
  
}
