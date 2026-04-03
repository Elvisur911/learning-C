#include<stdio.h>
int CalculateTotal(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}
float CalculateAverage(int total)
{
    return total/5;
}
float CalculatePercentage(int total)
{
    return (total/500.0)*100;
}

int main()
{
    int a, b, c, d, e;
    int total;
    float average, percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = calculateTotal(a, b, c, d, e);
    average = calculateAverage(total);
    percentage = calculatePercentage(total);

    printf("Total = %d\n", total);
    printf("Average = %f\n", average);
    printf("Percentage = %f\n", percentage);

    return 0;
}
