/*WAP to find factorial using recursion */

#include<stdio.h>
int getfactorial(int x)
{
	if(x>1)
	{
		return x* getfactorial(x-1);
	}
}
main()
{
	int n;
	printf("Enter the number to get its factorial = ");
	scanf("%d",&n);
	printf("%d",getfactorial(n));
	
}
