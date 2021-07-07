#include <stdio.h>
#include <stdlib.h>

int cube(int num){

return num*num*num;

}


int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
printf("the cube is: %d", cube(num));
return 0;
}
