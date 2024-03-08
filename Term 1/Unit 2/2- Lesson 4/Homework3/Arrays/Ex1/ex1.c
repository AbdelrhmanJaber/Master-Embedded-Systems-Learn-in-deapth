#include<stdio.h>

void main(void){
    float mat1[2][2];
    float mat2[2][2];
    float mat_sum[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(int i = 1 ; i < 3 ; i++){
        for(int j = 1 ; j < 3 ; j++){
            printf("Enter a%d%d: ",i,j);
            scanf("%f",&mat1[i-1][j-1]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i = 1 ; i < 3 ; i++){
        for(int j = 1 ; j < 3 ; j++){
            printf("Enter a%d%d: ",i,j);
            scanf("%f",&mat2[i-1][j-1]);
        }
    }

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            mat_sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("%0.1f  ",mat_sum[i][j]);
        }
        printf("\n");
    }
}