//Implement a C program to find the big number in the given numbers by the users .

#include<stdio.h>
int main () {
    int a;
    int b;
  printf( "enter a number:");
  scanf("%d", &a);
 
  printf("enter b number:");
  scanf("%d",&b);

  if (a>b){
    
   printf( "a is greater ");
  }else {
    printf("b is greater");
  }

return 0 ;
}