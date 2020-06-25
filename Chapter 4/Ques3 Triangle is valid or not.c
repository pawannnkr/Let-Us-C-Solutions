#include<stdio.h>
int main()
{
	int s1, s2, s3;
	printf("Enter the 1st side of Triangle: ");
	scanf("%d",&s1);
	
	printf("Enter the 2nd side of Triangle: ");
	scanf("%d",&s2);
	
	printf("Enter the 3rd side of Triangle: ");
	scanf("%d",&s3);
	 
	if((s1 + s2 > s3) && ( s2 + s3 > s1) && ( s1 + s3 > s2))
	{
		printf("The triagle is valid with sides %d %d %d",s1,s2,s3);
	}
	
	else printf("The triagle is invalid with sides %d %d %d",s1,s2,s3);
	return 0;
}
