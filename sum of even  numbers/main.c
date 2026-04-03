#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i;
    int sum = 0;

    printf("sum of even numbers between 0 and 100\n");
    for(i=0;i<=100;i+=2){
        sum+=i;

    }
    printf("%d\n", sum);
    return 0;
}
