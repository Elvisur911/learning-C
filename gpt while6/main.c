#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int num=1,n;

    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (num<=n){
    sum = sum +num;
    num++;
    }
    printf("sum of numbers from 1 to%d is %d",n ,sum);
    return 0;
}
