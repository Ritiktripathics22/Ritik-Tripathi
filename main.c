/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("sum=%d,sub=%d,mult=%d,div=%f",a+b,a-b,a*b,a/(float)b);
    return 0;
}
