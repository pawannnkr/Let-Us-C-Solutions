#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	double a,b, sum;
	printf("Enter the degree:");
	scanf("%d",&x);
	sum = pow(sin(x),2) + pow(cos(x),2);
	(sum ==1 ? printf("The sum is 1") : printf("The sum is not 1"));
	return 0;
}
