#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	float l1, l2, g1, g2, D, L1, L2, G1, G2;
	printf("Enter the values of lattitude in degree (L1,L2): ");
	scanf("%f %f", &L1, &L2);
	printf("\nEnter the value of longitude in degree (G1,G2): ");
	scanf("%f %f", &G1, &G2);
	// conversion of degree into radian
	l1 = L1 * 180 / pi;
	l2 = L2 * 180 / pi;
	g1 = G1 * 180 / pi;
	g2 = G2 * 180 / pi;
	D = 3963 * acos(sin(l1)* sin(l2)+ cos(l1)* cos(l2)* cos(g2 -g1));
	printf("The distance in nautical miles is : %f",D);
	return 0;
}
