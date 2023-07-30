#include<stdio.h>
#include<conio.h>
void main(){ int a;
             int fact=1;
    printf("Enter num= ");
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
        fact=fact*i;

   }
   printf("Factorial=%d",fact);
}