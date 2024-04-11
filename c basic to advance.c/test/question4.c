#include<stdio.h>
int main () { 
    int a;
    int b;
printf("enter number :");
scanf("%d",&a);

printf("enter number :");
scanf("%d",&b); 
 int aadi;
 
if (a>b){
    aadi = a-b;
}
else{
    aadi = b-a;
  
}


if (aadi % 2 ==0) {
 printf("the sum of  given number is even.\n ");
}
else{
printf("the sum of given number is odd.\n ");
}

 return 0 ;

}