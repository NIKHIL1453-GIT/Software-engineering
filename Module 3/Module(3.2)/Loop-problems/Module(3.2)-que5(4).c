//WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int i,fact=1,n1;
	printf("\nEnter any number = ");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is = %d",n1,fact);
	return 0;
}
