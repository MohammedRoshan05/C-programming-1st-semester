#include<stdio.h>
int main()
{
	int N,s=0;
	printf("Enter the value of N \n");
	scanf("%d",&N);
	for(int i=0;i<=N;i++)
		s=s+i;
	printf("The sum of first N natural numbers is %d",s);		
}
