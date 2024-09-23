//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter the value = ");
	scanf("%d",&a);
	int b = (a%2 == 0) ? 1:0;
	if(b==1)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
