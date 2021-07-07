#include <stdio.h>
#include <stdlib.h>

int big(int num1 , int num2 , int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){
        result = num1;

    } else if (num2 >= num1 && num2>= num3){

        result = num2;
     } else result = num3;
     return result;
}




int main()
{
    int num1;
    int num2;
    int num3;

    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    printf("enter the third number:");
    scanf("%d",&num3);

    printf("the bigger number is:%d", big(num1,num2,num3));
    return 0;
}
