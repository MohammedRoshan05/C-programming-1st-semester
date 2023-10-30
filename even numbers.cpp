#include<stdio.h>
int main()
{
	int N;
	printf("Enter the number till which odd numbers are needed \n");
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		if(i%2==0)
			printf("%d ",i);
	}
}
