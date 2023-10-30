#include<stdio.h>
#include<math.h>
int main()
{
	float P,R,T,SI,CI,TA;
	T=2;
	printf("Enter the Principle Amount to be deposited and rate of interest \n");
	scanf("%f %f",&P,&R);
	SI = (P*R*T)/100;
	printf("The simple interest is %f \n",SI);
	TA = P*pow((1+R/100),T);
	CI = TA - P;
	printf("The Compound Interest(half yearly) is %f \n",CI);	
	return 0;
}
