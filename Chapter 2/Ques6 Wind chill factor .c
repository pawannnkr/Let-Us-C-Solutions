#include<stdio.h>
#include<math.h>
int main()
{
	float wcf, v, t;//wcf= wind chill factor, v=velocity of wind, t= temperature of wind
	printf("Enter the value of tempertaure : ");
	scanf("%f", &t);
	printf("ENter the value of velocity : ");
	scanf("%f", &v);
	wcf = 35.74 + 0.6215 * t + ( 0.4275 * t - 35.75 ) * pow(v,0.16) ;
	printf("The wind chill factor is : %f",wcf);
	return 0;
}
