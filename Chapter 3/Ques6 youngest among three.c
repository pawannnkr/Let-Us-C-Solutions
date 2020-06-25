#include<stdio.h>
int main()
{
	int x, y, z; //x is age of Ram , y is age of Shyam , z is age of Ajay
	printf("Enter the age of Ram:");
	scanf("%d",&x);
    printf("Enter the age of Shyam:");
    scanf("%d",&y);
    printf("Enter the age of Ajay:");
	scanf("%d",&z);
	if ( x>y )
	{
		if( y>z )	printf("Ajay is youngest among all of them.");
		else printf("Shyam is youngest among all of them.");
	}
	else
	{
		if ( x>z )
		{
			printf("Ajay is youngest among all of them.");
		}
		else printf("Ram is youngest among all of them.");
	} 
	return 0;
	// If the age of two or all three of them are equal then we have to apply more conditions in this program , If you want to apply then check it out yourself. 
}
