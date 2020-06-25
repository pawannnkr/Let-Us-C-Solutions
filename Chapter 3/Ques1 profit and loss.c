#include<stdio.h>
int main()
{
	int sp, cp, profit, loss;
	printf(" Enter the cost price of item: ");
	scanf("%d",&cp);
	printf(" Enter the selling price of item: ");
	scanf("%d",&sp);
	if ( sp > cp )
	{
	    profit = sp - cp;
	    printf(" Profit made through this item is:%d",profit);
	}
	else if( cp > sp )
	{
		loss = cp - sp;
		printf(" Loss made through this item is:%d",loss);
	}
	else
	{
		printf(" No profit amd loss made through this item ");
	}
	return 0;
}
