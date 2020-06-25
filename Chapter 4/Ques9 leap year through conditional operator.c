#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:  ");
	scanf("%d",&year);
	(year%4==0 && year%100!=0) ? printf("%d is a leap Year",year) :(year%400 ==0 ) ? printf("%d is a leap Year",year) : printf("%d is not a leap year",year);
	return 0;
}
