#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int numbers[5];
    int i;
    printf("enter 5 integers:\n");
    for (i=0;i<5; i++){
        scanf("%d",& numbers[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<5;i++){
        printf("%d", numbers[i]);
    }
    return 0;
}
