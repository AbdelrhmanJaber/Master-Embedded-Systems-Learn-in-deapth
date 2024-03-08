#include<stdio.h>

void main(void){
    int row , column;
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d",&row ,&column);
    int arr[row][column];
    int transposedArray[column][row];

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            printf("Enter element a%d%d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0 ; i < column ; i++){
        for(int j = 0 ; j < row ; j++){
            transposedArray[i][j] = arr[j][i];
        }
    }

    for(int i = 0 ; i < column ; i++){
        for(int j = 0 ; j < row ; j++){
            printf("%d ",transposedArray[i][j]);
        }
        printf("\n");
    }
}