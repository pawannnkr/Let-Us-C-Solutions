#include<stdio.h>
int main()
{
	int a, b, c, greatest;
	printf("Enter the three no. to compare : \n");
	scanf("%d %d %d",&a,&b,&c);
	
	greatest = a > b ? ( a > c ? a : c) : (b > c ? b : c);
    printf("\nThe biggest number is : %d", greatest);
    return 0;
}
