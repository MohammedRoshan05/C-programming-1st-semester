#include<stdio.h>
int main()
{
	int t1,t2,t3;
	printf("Enter the points of the three bowling techniques \n");
	scanf("%d %d %d",&t1,&t2,&t3);
	if (t1>t2 && t1>t3)
	printf("first technique has maximum points i.e. %d",t1);
	else if (t2>t3)
	printf("second technique has maximum points i.e. %d",t2);
	else
	printf("third technique has maximum points i.e. %d",t3);
}
