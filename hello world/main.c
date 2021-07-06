#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'B';
    switch (grade)
    {case 'A':
        printf("You did excellent");
        break;

    case 'B':
        printf("you did good");
        break;

    case 'C':
        printf("you did poorly");
        break;

        default:
        printf("Invalid grade ");
    }



    return 0;
}
