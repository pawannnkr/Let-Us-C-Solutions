#include<stdio.h>
int main()
{
	int C, D, temp=0;
	printf("Enter the value of C: ");
	scanf("%d",&C);
	printf("Enter the value of D: ");
	scanf("%d",&D);
    temp = C;
	C = D;
	D = temp;
	printf("The interchanged value of C is:%d and D is:%d ",C,D);
	return 0;
}
