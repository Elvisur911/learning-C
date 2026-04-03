#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Hello world!\n");
    srand(time(0));
    double timeelapsed=time(0);
    printf("%lf\n",timeelapsed);
    int num=rand();
    printf("\n%d", num);

    return 0;
}
