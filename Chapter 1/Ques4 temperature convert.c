#include<stdio.h>
int main()
{
	float centigrade,fahrenheit;
	printf("Enter the value of temp (in fahrenheit):");
	scanf("\n%f",&fahrenheit);
	centigrade=(fahrenheit-32.0)*5/9;
	printf(" \n %.2f fahrenheit = %.2f centigrade ",fahrenheit,centigrade);
	return 0;
}
