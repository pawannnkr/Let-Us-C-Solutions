#include<stdio.h>
int main()
{
	float l,b,A,P;
	printf("Enter the length of rectangle: ");
	scanf("%f",&l);
	printf("Enter the breadth of rectangle:");
	scanf("%f",&b);
	A = l * b;
	P = 2*( l + b);
	if (A>P)
	printf("The area of rectangle is greater than perimeter");
	else 
	printf("The perimeter of rectangle is greater than area");
	return 0;
}
