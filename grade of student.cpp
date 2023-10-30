#include<stdio.h>
int main()
{
	float P,C,M,B,E;
	printf("Enter the marks of the five subjects in the order of PCMBE \n");
	scanf("%f %f %f %f %f",&P,&C,&M,&B,&E);
	float Grade;
	Grade = (P+C+M+B+E)/5;
	if (Grade >=90)
	printf("The Student has secured A grade");
	else if (Grade >=80)
	printf("The Student has secured B grade");
	else if (Grade >=70)
	printf("The Student has secured C grade");
	else if (Grade >=60)
	printf("The Student has secured D grade");
	else if (Grade >=40)
	printf("The Student has secured E grade");
	else 
	printf("The Student has secured F grade");
}
