#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x;
    int sum =0;
    printf("enter a number(0to stop)\n:");
     while(1){
     scanf("%d", &x);
     if (x==0){
        break;

     }
     sum+=x;
     printf("running sum so far:%d\n", sum);

        printf("enter new number(0 to stop)\n");
     }
     printf("total sum:%d\n", sum);
    return 0;
}
