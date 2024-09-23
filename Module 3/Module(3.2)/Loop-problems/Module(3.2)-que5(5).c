//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int f1=0,f2=1,f3,i,n1;
	printf("\nEnter any number = ");
	scanf("%d",&n1);
	printf("fibonnaci series = 0 1");
	for(i=1;i<=n1-2;i++)
	{
		f3 = f1 + f2;
		printf(" %d",f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;
}
