#include<stdio.h>
int main()
{
	int num, a, r=0, sum=0;
	printf("Enter a five digit no. : ");
	scanf("%d", &num);
	a = num;

	while ( a != 0)
	{
		r = a % 10;
		sum += r;
		a = a / 10;
	}
	printf("sum of all the digits of %d is %d",num,sum);
	return 0;
}
