#include<stdio.h>
int main()
{
	int num, rem, rev=0,original;
	printf("Enter a no. to reverse: ");
	scanf("%d",&num);
    original=num;
	while( num != 0)
	{
	    rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	printf("\nThe reverse of given no. is %d\n",rev);
	if( original == rev)
	{
	
	printf("\nThe entered no. is equal to it`s reverse ");
    }
	else
	{
	
		printf("The enetred no. is not equal to it`s reverse ");
    }
    
	return 0;
	
}
