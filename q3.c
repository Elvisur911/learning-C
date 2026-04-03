#include <stdio.h>

int main() {
    int a, b, c, largest;

    // Input three different integers
    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest number
    if (a > b && a > c)
        largest = a;
    else if (b > a && b > c)
        largest = b;
    else
        largest = c;

    // Display the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
