#include<stdio.h>
int main()
{
	int kilometer;
	float meter, centimeter, feet, inch;
	printf("Enter the distance between two cities (in kilometer): ");
	scanf("%d", &kilometer);
	meter = 1000.0 * kilometer;
	centimeter = 100000.0 * meter;
	feet = 3280.83 * kilometer;
	inch = 39370.07 * kilometer; 
	printf("Distance in meter is : %.2f ", meter);
	printf("\nDitance in feet is : %.2f ", feet);
	printf("\nDistance in inch is : %.2f ", inch);
	printf("\nDistance in centimeter is : %.2f ", centimeter);
	return 0;
}
