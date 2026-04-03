#include <stdio.h>

// User-defined function to calculate tax
float Calculatetax(float grosspay)
{
    float tax;

    if (grosspay >= 50000)
        tax = 0.30 * grosspay;
    else if (grosspay >= 40000)
        tax = 0.25 * grosspay;
    else if (grosspay >= 30000)
        tax = 0.20 * grosspay;
    else
        tax = 0.0;

    return tax;
}

int main()
{
    float grosspay, taxpaid, netpay;

    printf("Enter Gross Salary: ");
    scanf("%f", &grosspay);

    // Call the function
    taxpaid = Calculatetax(grosspay);

    netpay = grosspay - taxpaid;

    printf("\nTax Paid: %.2f", taxpaid);
    printf("\nNet Pay: %.2f\n", netpay);

    return 0;
}
