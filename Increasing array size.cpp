//Increasing array size

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p,*q;
	p=(int *)malloc(5*sizeof(int));
	p[0]=6,p[1]=7,p[2]=5,p[3]=1,p[4]=9;
	p[5]=10;
//	q=(int *)malloc(5*sizeof(int));
//	for(int i=0;i<5;i++)
//	{
//		q[i]=p[i];
//	}
//	free(p);
//	p=q;
//	q=NULL;
	for(int i=0;i<6;i++)
	{
		printf("%d  ",p[i]);
	}
}
