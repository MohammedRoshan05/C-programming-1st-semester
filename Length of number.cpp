#include<stdio.h>
int main()
{
	int N,d=0;
	printf("Enter any number \n");
	scanf("%d",&N);
	while(N!=0){
		N=N/10;
		d++;}
	printf("The length of number is %d",d);
}
