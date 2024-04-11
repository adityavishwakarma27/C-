//Write a function in which we take an Input from the user (5 subject marks )and return how many percentage it gets in exam

#include<stdio.h>
int main () {

    int number1,number2,number3,number4,number5 ;
    int total_marks;

    printf ("enter 1 subject marks:");
    scanf("%d", &number1);

    printf("enter 2 subject marks:");
    scanf("%d", &number2);
    
    printf("enter 3 subject marks:");
    scanf("%d", &number3);

    printf("enter 4 subject marks:");
    scanf("%d", &number4);

    printf("enter 5 subject marks:");
    scanf("%d", &number5);

   
    total_marks=number1+number2+number3+number4+number5;
     
    float parcantage =( (float)total_marks / 500) * 100 ;
    
    printf("the percentage: %.2f%%\n",parcantage);


    return 0;
}


