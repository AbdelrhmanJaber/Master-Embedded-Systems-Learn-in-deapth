#include <stdio.h>
#include <string.h>

typedef struct employee
{
	char name[50];
	int id;
}emp;

int main()
{
	emp emp1 = {"Abdelrahman" , 1002} ;
	emp emp2 = {"Omar" , 1548} ;
	emp emp3 = {"Aly" , 4522} ;
	emp *arrOfEmp[3] = {&emp1 , &emp2 , &emp3};
	emp ** parr_struct = arrOfEmp;
	for(int i = 0 ; i < 3 ; i++){
		printf("Employee Name : %s \n",parr_struct[i]->name);
		printf("Employee ID : %d\n" , parr_struct[i]->id);
		printf("\n");
	}	
	return 0;
}