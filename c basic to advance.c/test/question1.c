//Write a C program to check whether a number is even or odd using conditional statements.

#include<stdio.h>
int main () {
    int a ;
     printf("enter a :");
     scanf ("%d", &a);

     if (a % 2==0) {

    printf("is even.\n");
     }else{
        printf("is odd.\n");     
        }
return 0;
}