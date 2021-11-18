#include<stdio.h>
void main()
{
int a, b, su, df, mu, di, mo;
printf("Enter the values of the first and the second no. : ");
scanf("%d %d", &a, &b);
su = a + b;
df = a - b;
mu = a * b;
di = a / b;
mo = a % b;
printf("Sum, Difference, Product, Division, and Modulus of/between %d and %d : %d, %d, %d, %d, %d \n", a, b, su, df, mu, di, mo);
}
