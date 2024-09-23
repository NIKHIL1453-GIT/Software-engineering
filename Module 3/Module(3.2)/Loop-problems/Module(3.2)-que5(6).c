/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
82746*/
#include<stdio.h>
int main()
{
	int i,n1,n2,pro=0,temp;
	printf("Enter any number = ");
	scanf("%d",&n1);
	temp=n1;
	while(n1!=0)
	{
		n2=n1%10;
		pro=(pro*10)+n2;
		n1=n1/10;
	}
	printf("%d is the reverse order of the number %d",pro,temp);
	return 0;
}
