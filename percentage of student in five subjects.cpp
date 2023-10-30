#include<stdio.h>
int main()
{
	float p,c,m,b,e;
	printf("Enter the marks of the student in five subjects \n");
	scanf("%f %f %f %f %f",&p,&c,&m,&b,&e);
	float percent;
	percent = ((p+c+b+m+e)/500)*100;
	printf("The students percentage is %f",percent);
	return 0;
}
