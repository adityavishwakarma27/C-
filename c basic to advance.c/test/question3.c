#include<stdio.h>
int main (){
    int a;
    int b; 
printf("enter number :");
scanf("%d",&a);

printf("enter number :");
scanf("%d",&b);
int sum=a+b;

if (sum % 2 == 0) {
printf("the sum of given number is even.\n");
}else {
printf("the sum of given number is odd.\n");
}

return 0;
}