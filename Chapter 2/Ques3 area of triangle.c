#include<stdio.h>
#include<math.h>
int main()
{
	float s1,s2,s3, s,area;
	printf("Enter first side of traingle: ");
	scanf("%f",&s1);
	printf("Enter second side of triangle: ");
	scanf("%f", &s2);
	printf("Enter third side of triangle: ");
	scanf("%f", &s3);
	s=(s1+s2+s3)/2;
	area= sqrt(s*(s-s1)*(s-s2)*(s-s3));
	printf("Area of triangle = %.2f cm*cm",area);
	return 0;
}
