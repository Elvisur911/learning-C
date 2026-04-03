#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a , &b);

    if(a>b){
        printf("largest is:%d\n",a);
    }else if(b>a){
    printf("largest is:%d\n",b);
    }else printf("two are equal\n");
    return 0;
}
