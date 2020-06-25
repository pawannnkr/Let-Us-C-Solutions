#include<stdio.h>
int main()
{
	float hard, c_c, t_s;
	printf("Enter the Hardness of steel :");
	scanf("%f",&hard);
	
	printf("Enter the amount of carbon in steel :");
	scanf("%f",&c_c);
	
	printf("Enter the Tensile strength of steel :");
	scanf("%f",&t_s);
	if ((hard > 50) && (c_c < 0.7) && (t_s > 5600))
	{
		printf("Grade of steel is 10");
	}
	else if ((hard > 50) && (c_c < 0.7))
    {
    	printf("Grade of steel is 9");
	}
	else if ((c_c < 0.7) && (t_s > 5600))
	{
		printf("Grade of steel is 8");
	}
	else if ((hard > 50) && (t_s > 5600))
	{
	    printf("Grade of steel is 7");
	}
	else if((hard > 50) || (c_c < 0.7) || (t_s > 5600))
	{
		printf("Grade of steel is 6");
	}
	else
		printf("Grade of steel is 5");
		
		return 0;
}

