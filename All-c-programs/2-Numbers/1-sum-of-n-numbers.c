#include<stdio.h>
void main(){
    int n;printf("Enter the value of N : ");scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("\nSum of N Numbers : %d",sum);
}