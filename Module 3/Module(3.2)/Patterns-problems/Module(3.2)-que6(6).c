/*Wap to print this pattern
*
**
***
****
*****
****
***
**
*
*/#include<stdio.h>
int main()
{
	int i,j,row,k;
	printf("enter row count = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	int temp = row-1;
	for(i=1;i<row;i++)
	{
		for(k=temp;k>=1;k--)
		{
			printf("* ");
		}
		temp--;
		printf("\n");
	}
	return 0;
}
