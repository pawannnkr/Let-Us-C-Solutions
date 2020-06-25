#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character to find it`s tpye:");
	scanf("%c",&ch);
	 (ch >= 65 && ch <=90 ? printf("Entered character is not lower case") : (ch >=97 && ch <=122) ? printf("Entered character is lower case alphabet") : (ch >= 48 && ch <= 57) ? printf("Enterd character is not special symbol") : printf("Enterd character is special symbol"));
 
	return 0;
	
}
