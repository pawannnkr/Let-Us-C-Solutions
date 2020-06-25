#include<stdio.h>
int main()
{
	int s1, s2, s3;
	printf("Enter the 1st side of triangle: ");
	scanf("%d",&s1);
	
	printf("Enter the 2nd side of triangle: ");
	scanf("%d",&s2);
	
	printf("Enter the 3rd side of triangle: ");
	scanf("%d",&s3);
	if (s1 == s2 && s2 == s3)
	{
		printf("This triangle is equilateral triangle.");
	}
	else if ( s1 == s2  || s2 == s3   || s1 == s3   )
	{
		printf("This triagngle is isoceles triangle.");
	}
	else printf("This triangle is scalence triangle");
	return 0;
}
