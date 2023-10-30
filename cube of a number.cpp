#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	printf("Give a number to be cubed \n");
	scanf("%d",&x);
	y = pow(x,3);
	printf("The cube of the number is %d",y);
	return 0;
}
