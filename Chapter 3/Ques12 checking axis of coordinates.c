#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the coordinates (x,y) : ");
	scanf("%d %d",&x,&y);
	if (y == 0)
	{
		printf("The enter coordinates (%d,%d) lies on x axis",x,y);
	}
	else if (x == 0)
	{
		printf("The enter coordinates (%d,%d) lies on y axis",x,y);
	}
	else if ( x==0,y==0)
	{
	printf("The enter coordinates (%d,%d) lies on origin",x,y);
	}
	else 	printf("The enter coordinates (%d,%d) lies on both axis",x,y);
	return 0;
}
