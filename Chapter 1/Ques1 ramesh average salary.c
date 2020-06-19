#include<stdio.h>
int main()
{
	int b; /*ramesh basic salary*/
	float d, r, n; /*d=dearness allowance, r = rent allowance, n = gross salary*/
	printf("Enter the basic salary of shipra: ");
	scanf("%d", &b);
	d = 0.4 * b;
	r = 0.2 * b;
	n = d + r + b;
	printf("\nShipra gross salary is = %f",n);
    return 0;
    
}
