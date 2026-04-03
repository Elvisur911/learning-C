#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
printf("Enter 3 integers\n");
scanf("%d%d%d",&a,&b,&c);

if (a>b&&a>c){
    printf("Largest is:%d\n",a);
}else if(b>a&&b>c){
printf("Largest is:%d\n", b);
}else if(c>a&&c>b){
printf("largest is:%d\n",c);
}
    return 0;
}
