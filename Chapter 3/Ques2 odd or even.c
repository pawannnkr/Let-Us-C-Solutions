#include<stdio.h>
int main()
{
	int n, r;
	printf("Enter a number to find out it is odd or even: ");
	scanf("%d",&n);
	r = n
	%2;
	if (r==0)
	printf("The enetered number %d is even.",n);
	else
	printf("The entered number %d is odd.",n);
	return 0;	
}
