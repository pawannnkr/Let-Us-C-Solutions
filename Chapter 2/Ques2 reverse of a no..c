#include<stdio.h>
int main()
{
	int num, a, r=0;
	printf("Enter a no. to reverse: ");
	scanf("%d",&num);
	a=num;
	while (a != 0)
	{
		r = r * 10;
		r = r+ a%10;
 		a = a / 10;
 	}
 	printf("The reverse of %d is %d",num,r);
 	return 0;
}
