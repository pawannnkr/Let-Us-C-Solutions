#include<stdio.h>
int main()
{
int N,a,b,c,d,e;
printf("Enter the sum of rupees: ");
scanf("%d",&N);
printf("The no. of 100 rs note is: %d",N/100);
a = N%100;
printf("\nThe no. of 50 rs note is: %d",a/50);
b = a%50;
printf("\nThe no. of 10 rs note is: %d",b/10);
c = b%10;
printf("\nThe no. of 5 rs note is: %d",c/5);
d = c%5;
printf("\nThe no. of 2 rs note is: %d",d/2);
e = d%2;
printf("\nThe no. of 1 rs note is: %d",e);
return 0;	
}
