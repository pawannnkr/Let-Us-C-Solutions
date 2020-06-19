#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	float degree=0, radian;
	printf("Enter the value of degree : ");
	scanf("%f", &degree);
	radian = (pi / 180 ) * degree;
	printf("The all trignometric ratios are: ");
	printf("\nsin(%f) = %f",degree,sin(radian));
	printf("\ncos(%f) = %f",degree,cos(radian));
	printf("\ntan(%f) = %f",degree,tan(radian));
	printf("\ncosec(%f) = %f",degree,1 / sin(radian));
	printf("\nsec(%f) = %f",degree, 1 / cos(radian));
	printf("\ncot(%f) = %f",degree,1 / tan(radian));
    return 0;
}
