#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a no.:\n");
    scanf("%d",&a);
    if(a%9==0){
        printf("divisible by 9\n");
    }else printf("Not divisible by 9\n");
    return 0;
}
