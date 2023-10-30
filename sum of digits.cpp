#include<stdio.h>
int main()
{
	int N,s=0,i;
	printf("Enter any number \n");
	scanf("%d",&N);
	int x=N;
	while(N!=0){
		i=N%10;
		s=s+i;
		N/=10;
	}
	printf("The sum of digits of %d is %d",x,s);
}
