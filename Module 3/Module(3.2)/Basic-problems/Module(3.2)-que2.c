//WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter the 1st value = ");
	scanf("%d",&a);
	printf("\nEnter the 2nd value = ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nValues After Swapping:\na = %d\nb = %d",a,b);
	return 0;
}
