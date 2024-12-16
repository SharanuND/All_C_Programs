#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the followign value\n");
    printf("A : ");scanf("%d",&a);
    printf("B : ");scanf("%d",&b);
    printf("\nBefore swapping\nA : %d\nB : %d",a,b);
    int c=a;a=b;b=c;
    printf("\nAftrer swapping\nA : %d\nB : %d",a,b);

}