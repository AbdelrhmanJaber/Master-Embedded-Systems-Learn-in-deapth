#include <stdio.h>


union union_job
{
	char name [32] ;
	float salary;
	int worker_no;

} U;

struct struct_job
{
	char name [32];
	float salary;
	int worker_no;

} S;


int main ()
{
	printf ("Size of the union is: %d", sizeof (U));
	printf ("\nSize of the structure is: %d", sizeof (S));

	return 0;
}