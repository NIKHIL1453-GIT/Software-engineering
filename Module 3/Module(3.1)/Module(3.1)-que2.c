/*Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo)*/
#include<stdio.h>
int main()
{
	int n1,n2,sum,sub,multi,rem;
	float div;
	printf("\nEnter the 1st value =");
	scanf("%d",&n1);
	printf("\nEnter the 2nd value =");
	scanf("%d",&n2);
	sum=n1+n2;
	sub=n1-n2;
	multi=n1*n2;
	div=n1/n2;
	rem=n1%n2;
	printf("\nAddition          = %d",sum);
	printf("\nSubtraction       = %d",sub);
	printf("\nMultiplication    = %d",multi);
	printf("\nDivision          = %.2f",div);
	printf("\nRemainder         = %d",rem);
	return 0;
}
