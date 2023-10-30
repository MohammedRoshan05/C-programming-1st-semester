#include<stdio.h>
int main()
{
	int B,T,H,G;
	printf("Enter the tier of city in which the employee is hired \n");
	scanf("%d",&T);
	printf("Enter the Basic salary of the employee \n");
	scanf("%d",&B);
	if (T==1)
	H = 27;
	else if (T==2)
	H = 24;
	else if (T==3)
	H = 18;
	else
	H = 16;
	G = B + (H*B/100) + (44*B/100) + (8*B/100);
	printf("The gross salary of the employee is %d",G);
}
