#include<stdio.h>
void main()
{
	int a;
	st:
	printf("Enter the no. : ");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("%d is an even no. \n", a);
	}
	else
	{
	printf("%d is an odd no. \n", a);
	}
	goto st;
}
