#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d, ",i);
        }
    }
}