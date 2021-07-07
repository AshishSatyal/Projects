#include <stdio.h>
#include <stdlib.h>

int main()
{


    double length;
    double breadth;

    printf("enter the length:");
    scanf("%lf", &length);

    printf("enter the breadth:");
    scanf("%lf", &breadth);

    printf("The area of rectangle is: %f", length * breadth );

    return 0;
}
