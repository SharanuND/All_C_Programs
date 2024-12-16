#include<stdio.h>
void main(){
    printf("Enter the value of following\n");
    printf("A : ");int a;scanf("%d",&a);
    printf("B : ");int b;scanf("%d",&b);
    printf("\nBefore swapping\nA : %d\nB : %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping\nA : %d\nB : %d",a,b);
}