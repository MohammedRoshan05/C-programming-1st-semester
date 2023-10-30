#include<stdio.h>
int main()
{
	int N,f=1;
	printf("Enter the value of N \n");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
		f=f*i;
	printf("The factorial of %d is %d",N,f);
}
