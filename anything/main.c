#include <stdio.h>
#include <stdlib.h>

  void SayHi(char name[] , int age);
int main()
{
      SayHi("Ashish", 20);
      SayHi("sandip", 25);
      SayHi("Sandesh", 33);

    return 0;
}
     char name;
    void SayHi(char name[] , int age){
        printf("Hello %s, you are %d \n", name, age);
    }
