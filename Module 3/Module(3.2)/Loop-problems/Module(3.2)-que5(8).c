/*Write a program make a summation of given number (E.g., 1523 Ans: -11)*/
#include<stdio.h>
int main()
{
	int i,n1,n2,sum=0,temp;
	printf("Enter the number = ");
	scanf("%d",&n1);
	temp=n1;
	while(n1!=0)
	{
		n2=n1%10;
		sum=sum+n2;
		n1=n1/10;
	}
	printf("%d is the summation of the number %d",sum,temp);
	return 0;
}
