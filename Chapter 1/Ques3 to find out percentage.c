#include<stdio.h>
int main()
{
	int Math, Science, English, Sst, Hindi, aggre;
	float  percent;
	printf("Enter the marks of each subject\n");
	printf("Math : ");
	scanf("%d", &Math);
	printf("Science : ");
	scanf("%d,", &Science);
	printf("English : ");
	scanf("%d", &English);
	printf("Sst: ");
	scanf("%d", &Sst);
	printf("Hindi : ");
	scanf("%d", &Hindi);
	aggre=(Math+Science+English+Sst+Hindi);
	percent=(aggre/500.0)*100;
	printf("\nAggregate marks: %d", aggre);
	printf("\nPercentage: %.2f",percent);
	return 0;
}
