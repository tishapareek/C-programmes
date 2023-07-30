#include<stdio.h>
#include<conio.h>
void main(){
    int y=0,r,o;
    int n=131;
    o=n;

    while(n!=0){
        r=n%10;
        y=y*10+r;
        n/=10;
    }
    if(o==y){
        printf("palindrom");
    }
    else{
        printf("not a palindrom");
    }

}