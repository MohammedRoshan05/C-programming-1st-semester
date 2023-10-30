#include<stdio.h>
int main()
{
	int N,p=0,i;
	printf("Enter any number \n");
	scanf("%d",&N);
	int x=N;
	while(N!=0){
		i=N%10;
		p=p*10+i;
		N/=10;
	}
	if(x==p)
		printf("%d is a palindrome",x);
	else
		printf("%d is not a palindrome",x);
}
