#include<stdio.h>
#define pi 3.14
int main()
{
int length,breadth,r,pr, ar ;//r=radiuus of circle,pr=perimeter of rectangle,ar=area of rectangle
float pc ,ac;//pc=perimeter of circle,ac=area of circle
printf("Enter the dimension of Rectangle");
printf("\nlength: ");
scanf("%d", &length);
printf("\nbreadth: ");
scanf("%d", &breadth);
printf("\nEnter the measurement of Radius:");
scanf("%d",&r);
pr = 2*length+2*breadth;
pc = 2*pi*r;
ar = length*breadth;
ac = pi*r*r;
printf("\nPerimeter of rectangle is: %d ",pr);
printf("\nperimeter of circle is: %.2f ",pc);
printf("\nArea of rectangle is: %d ",ar);
printf("\nArea of circle is: %.2f ", ac);
return 0;
}
