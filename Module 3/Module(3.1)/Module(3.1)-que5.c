//WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year = ");
	scanf("%d",&year);
	if(((year%4==0) && ((year%400==0) || (year%100!=0))))
	{
		printf("%d is a Leap year.",year);
	}
	else
	{
		printf("%d is not a Leap year.",year);
	}
	return 0;
}
