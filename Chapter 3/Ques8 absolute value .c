#include<stdio.h>
#include<math.h>
int main()
{
	double x,y;
	printf("Enter the number to find out absolute value: ");;
	scanf("%lf",&x);
	y = fabs(x);
	printf("absolute value is : %lf",y);
	return 0;
}
