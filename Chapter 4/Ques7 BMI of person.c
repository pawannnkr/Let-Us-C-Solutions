#include<stdio.h>
#include<math.h>
int main()
{
	float h,w,b;
	printf("Enter the height(in meters) of person: ");
	scanf("%f",&h);
	
	printf("Enter the weight(in kg) of person: ");
	scanf("%f",&w);
	
	b = w / pow(h,2);
	if (b < 15)
	printf("The BMI of person is %f and the person is in Starvation category",b);
	else if (b >= 15.1 && b <= 17.5)
	printf("The BMI of person is %f and the person is in Aneorexic category",b);
	else if (b >= 17.6 && b <= 18.5)
	printf("The BMI of person is %f and the person is in Underweight category",b);
	else if (b >= 18.6 && b <= 24.9)
	printf("The BMI of person is %f and the person is in Ideal category",b);
	else if (b >= 25.0 && b <= 25.9)
	printf("The BMI of person is %f and the person is in Overweight category",b);
	else if (b >= 30.0 && b <= 30.9)
	printf("The BMI of person is %f and the person is in Obese category",b);
	else 
	printf("The BMI of person is %f and the person is in Morbidly obese category",b);
	return 0;
}
