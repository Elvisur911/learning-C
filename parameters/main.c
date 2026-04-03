#include <stdio.h>
#include <stdlib.h>
void myfunction(char name[], char car[]){
printf("hello I am %s and I love %s", name, car);
}
int main()
{
    printf("Hello world!\n");

    myfunction("Elvis", "Supra");
    return 0;
}
