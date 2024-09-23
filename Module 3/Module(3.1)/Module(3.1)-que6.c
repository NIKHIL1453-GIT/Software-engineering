//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	int D,Y;
	printf("\nEnter the Number of Days = ");
	scanf("%d",&D);
	printf("\nEnter the Number of years = ");
	scanf("%d",&Y);
	printf("\nThe days into Years = %d",(D/365));
	printf("\nThe years into days = %d",(Y*365));
	return 0;
}
