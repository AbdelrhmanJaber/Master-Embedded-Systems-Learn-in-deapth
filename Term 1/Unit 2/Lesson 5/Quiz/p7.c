#include<stdio.h>
#include<math.h>

int checkPower3(int num);

void main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(checkPower3(num)){
        printf("the number %d is a power of 3",num);
    }else{
        printf("the number %d is not a power of 3",num);
    }

}

int checkPower3(int num){
    int passCheck;
    double i = log(num) / log(3);
    if(!(i - (int)i)) passCheck = 1;
    else passCheck = 0;
    return passCheck;
}