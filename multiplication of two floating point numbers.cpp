#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter two floaing point numbers \n");
	scanf("%f %f",&a,&b);
	c = a*b;
	printf("The floating point representation of their product is %f",c);
	printf("The integer representation of their product is %d",(int)c);
	return 0;	
	
}
