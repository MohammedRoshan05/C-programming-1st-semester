#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the two numbers \n");
	scanf("%d %d",&a,&b);
	c = a;
	d = b;
	b = c;
	a = d;
	printf("The values of the two variables have been swapped i.e. %d %d",a,b);
	return 0;
}
