/*Wap To Print Pattern
        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *
*/
#include<stdio.h>
int main()
{
	int i,j,row,k,spc,h;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	spc = row + 3;
	int temp = 1;
	for(i=1;i<=row;i++)
	{
		for(j=spc;j>=1;j--)
		{
			printf(" ");	
		}
		for(k=1;k<=temp;k++)
		{
			printf("* ");
		}
		printf("\n");
		temp = temp+2;
		spc = spc-2;
	}
	return 0;
}
