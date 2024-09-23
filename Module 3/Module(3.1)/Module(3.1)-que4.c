//WAP to find simple interest
#include<stdio.h>
int main()
{
	int n;
	float p,s,r;
	printf("\nEnter the Principle value = ");
	scanf("%f",&p);
	printf("\nEnter the Rate = ");
	scanf("%f",&r);
	printf("\nEnter the Number of years = ");
	scanf("%d",&n);
	s=((p*r*n)*0.01);
	printf("\nThe Simple-Interest is = %.3f",s);
	return 0;
}
