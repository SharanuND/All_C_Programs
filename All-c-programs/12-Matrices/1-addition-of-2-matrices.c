#include<stdio.h>
void main(){
    start:
    printf("Enter the size of matrix\n");
    printf("ROWS: ");int row;scanf("%d",&row);
    printf("COLUMNS: ");int col;scanf("%d",&col);
    if(row!=col){
        printf("Only enter the square matrix!!!\n");

        goto start;
    }
    int a[row][col],b[row][col];
    printf("Now enter the matrix 1 elements\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%d x %d : ",i,j);

            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    printf("\nNow enter the matrix 2 elements\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%d x %d : ",i,j);

            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


    
    printf("\n\n!!!Sum of matrices is as follows!!!\n\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}