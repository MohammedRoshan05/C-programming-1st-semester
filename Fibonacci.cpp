#include<stdio.h>
int main()
{
	int N,a=0,b=1,s=0;
	printf("Enter the value of N \n");
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		printf("%d ",a);
		s=a+b;
		a=b;
		b=s;
	}
}
