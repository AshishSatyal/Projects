#include<stdio.h>

#include<math.h>
#include "power.h"
int main()
{
    int n,out;
    printf("Enter the number:");
    scanf("%d",&n);
    out=p(n);
    printf("Power of 30:%d",out);
    return 0;
}
