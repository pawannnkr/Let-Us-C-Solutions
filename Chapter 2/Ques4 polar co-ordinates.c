#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	float x, y, r, theta;
	printf("Enter the cartesian co-ordinates(x,y)\n");
	scanf("%f%f", &x,&y);
	r = sqrt( x*x + y*y );
	theta = tan(y/x);
	theta = theta*(180.0/pi);
	printf("Polar co-ordinates :\n( r, theta) = ( %f , %f )\n", r, theta);
	return 0;
}
