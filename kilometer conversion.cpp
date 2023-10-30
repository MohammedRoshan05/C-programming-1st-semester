#include<stdio.h>
int main()
{
	float x,m,cm,mm;
	printf("Enter the distance in km \n");
	scanf("%f",&x);
	m = x *1000;
	cm = m*100;
	mm = cm*10;
	printf("The distance in meters is %f m \n",m);
	printf("The distance in meters is %f cm \n ",cm);
	printf("The distance in meters is %f mm\n",mm);
	return 0;
}
