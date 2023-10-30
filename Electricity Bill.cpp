#include<stdio.h>
int main()
{
	int U,C,T;
	printf("Enter the no of units of energy the household has consumed \n");
	scanf("%d",&U);
	if(U<100)
		C = 5;
	else if(U>100 && U<500)
		C = 7;
	else
		C = 10;
		
	T = U*C;
	printf("The total charge of electricity bill is %d",T);
}
