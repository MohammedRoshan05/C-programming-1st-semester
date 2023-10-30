#include<stdio.h>
int main()
{
	int N,r=0,i;
	printf("Enter any number \n");
	scanf("%d",&N);
	int x=N;
	while(N!=0){
		i=N%10;
		r=r*10+i;
		N/=10;
	}
	printf("The reverse of a %d is %d",x,r);
}
