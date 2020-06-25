#include<stdio.h>
#include<math.h>
int main()
{
	float x1, y1, x2, y2, d, r;
	printf("Enter the coordinates (x1,y1)  center of cicle: ");
	scanf("%f %f",&x1,&y1);
	printf("Enter the Radius of circle: ");
	scanf("%f",&r);
	printf("Enter the coordinates (x2,y2) to check whether it lies: ");
	scanf("%f %f",&x2,&y2);
	d = sqrt( pow((x2-x1),2)+  pow((y2-y1),2));
	if( d > r)
	{
		printf("The entered coordintes(%.1f,%.1f) is outside the circle",x2,y2);
	}
	else if (d < r)
	{
		printf("Entered coordinates (%.1f,%.1f) is in inside the circle",x2,y2);
		
	}
	else printf("Entered coordinates (%.1f,%.1f) lies on the circle",x2,y2);
	return 0;
}
