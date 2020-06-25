#include<stdio.h>

int main()

{
	float  r,g,b;
	float  k, w, c, m, y;
	printf("Enter the value of R:");
	scanf("%f",&r); 
	
	printf("Enter the value of G:");
	scanf("%f",&g);
	
	printf("Enter the value of B:");
	scanf("%f",&b);
	
	if ((r <= 255 ) && (g <= 255 ) && (b <= 255 ) && (r > 0 ) && (g > 0 ) && (b > 0 ))
	{
		if ((r == 0 ) && (g == 0 ) && (b == 0))
		{
			printf("The value of C, M and Y is 0 and value the value of black is 1 ");
		} 
		else
		{
			float p,q,l,max;
			p = r / 255;
			q = g / 255;
			l = b / 255;
			max = (p > q ? ( p > l ? p : l) : (q > l ? q : l));
			w = max;
			c = (w - r / 255) / w;
			printf("The color of Cyan is: %f",c);
			m = (w - g / 255) /w;
			("\nThe color of Magenta is: %f",m);
			y = (w - b / 255) / w;
			printf("\nThe color of Yellow is: %f",y);
			k = 1 - w;
			printf("\nThe color of Black is: %f",k);
		}
	}
	else 
	{
		printf("Enter the value of R , G, B between 0-255");
	}
	return 0;
}
