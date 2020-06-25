#include<stdio.h>
int main()
{
	int a, b, c, sum;
	printf("Enter the angles of triangle :\n");
	scanf("%d %d %d",&a,&b,&c);
	sum = a + b +c ;
	{
	if (sum == 180)
	printf("From the given angles of triangle , this triangle exists ");
	else printf("this triangle not exists");
    }
	return 0;
}
