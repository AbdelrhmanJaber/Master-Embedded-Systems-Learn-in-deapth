#include<stdio.h>

void main(void){
    int arr1[100] , arr2[100] , arr3[100] , size1 , size2;
    printf("Enter the size of first array : ");
    scanf("%d",&size1);
    printf("Enter the elements of first array :\n");
    for(int i = 0 ; i < size1 ; i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the size of seconde array : ");
    scanf("%d",&size2);
    printf("Enter the elements of second array :\n");
    for(int i = 0 ; i < size2 ; i++){
        scanf("%d",&arr2[i]);
    }
    fflush(stdout);
    //int biggerSize = size1 > size2 ? size1 : size2;
    for(int i = 0 ; i < 100 ; i++){
        arr3[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = arr3[i];
    }

    printf("\nArrays after swaping :\n");
    printf("The first array : ");
    for(int i = 0 ; i < size2 ; i++){
        printf("%d ",arr1[i]);
        fflush(stdout);
    }
    fflush(stdout);
    printf("\n The second array : ");

    for(int i = 0 ; i < size1 ; i++){
        printf("%d ",arr2[i]);
        fflush(stdout);
    }
}