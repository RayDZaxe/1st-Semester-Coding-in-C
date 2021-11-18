#include<stdio.h>
void main()
{
	float a, b, c, d, e;
	printf("Enter the base salary : ");
	scanf("%f", &a);
	if(a<10000)
	{
		b = a * 12 / 100;
		c = a * 8 / 100;
		d = 250;
	}
	else
	{
		b = a * 15 / 100;
		c = a * 10 / 100;
		d = 350;
	}
	e = a + b + c + d;
	printf("Total salary is : %f \n", e);
}
