/*Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5)*/
#include<stdio.h>
int main()
{
	int i,n1,n2,n3,sum=0,temp,pro=0;
	printf("Enter any number = ");
	scanf("%d",&n1);
	temp=n1;
	n3=n1;
	while(n1!=0)
	{
		n2=n1%10;
		sum=sum+n2;
		while(n1!=0)
		{
			n3=n1%10;
			pro=(pro*10)+n3;
			n1=n1/10;
		}
		pro=pro%10;
		sum=sum+pro;
	}
	printf("%d is the summation of the first and last digit of the number %d",sum,temp);
	return 0;
}
