#include <stdio.h>
#include <stdlib.h>

double avr(double num1 , double num2, double num3){
    return (num1 + num2 + num3) / 3 ;
}


int main()
{
    printf("the average is:%f",avr(1,2,3));
    return 0;
}
