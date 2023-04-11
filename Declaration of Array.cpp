//Declaration of Array

#include <stdio.h>
int main()
{
	int A[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		printf("%d  ",A[i]);
	}
	printf("\n");
		for(int i=0;i<5;i++)
	{
		printf("%d  ",i[A]);
	}
	printf("\n");
		for(int i=0;i<5;i++)
	{
		printf("%d  ",*(A+i));
	}
	printf("\n%d\n",*(A+2));
	
	int B[5]={2,3};
	int C[5]={0};
	for(int i=0;i<5;i++)
	{
		printf("%d  ",B[i]);
		}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("%d  ",C[i]);
		}	
}
