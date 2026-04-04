#include <stdio.h>

int main() {
    int num;
 FILE *fptr;
    printf("Enter a number (0 to stop): ");
    scanf("%d", &num);
    fptr = fopen("short note.txt","w");
    fprintf(fptr, "Hello world");
    fclose(fptr);


    while (num != 0) {
        printf("You entered: %d\n", num);

        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
    }

    printf("Program stopped. You entered 0.\n");

    return 0;
}
