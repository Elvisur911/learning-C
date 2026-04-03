#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i;
    int mtp;
    printf("Hello world!\n");
    printf("Enter a number\n");
    scanf("%d", &x);

    printf("multiplication table of %d :\n", x);
    for(i=1;i<=50;i++){
        mtp = x * i;
        printf("%d x %d = %d\n", x ,i , mtp);
    }

    return 0;
}
