#include <stdio.h>
#include <stdlib.h>
float Calculatetax(float g);
float gross,tax netpay;
int main()
{
    printf("Enter the gross salary\n");
    scanf("%f\n", &gross);
    tax = Calculatetax(gross);
    netpay=gross-tax;
    printf("netpay=%.3f\n",netpay);
    printf("tax paid=%.3f\n",tax);
    float Calculatetax(g);

    if (g>=50000);
     t=g*0.3;
    else if(g>=40000&&g<50000);
    t=g*0.25;
    else if(g>=30000&&g<40000);
    t=g*0.2;
    else if (g<30000);
    t=g*0;
    return 0;
}
