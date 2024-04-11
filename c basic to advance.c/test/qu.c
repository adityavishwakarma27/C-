#include <stdio.h>

int main() {
    int number1, number2, number3, number4, number5;
    int total_marks;

    printf("Enter marks for subject 1: ");
    scanf("%d", &number1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &number2);
    
    printf("Enter marks for subject 3: ");
    scanf("%d", &number3);

    printf("Enter marks for subject 4: ");
    scanf("%d", &number4);

    printf("Enter marks for subject 5: ");
    scanf("%d", &number5);

    total_marks = number1 + number2 + number3 + number4 + number5;
     
    float percentage = ((float)total_marks / 500) * 100;

    printf("Total marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
