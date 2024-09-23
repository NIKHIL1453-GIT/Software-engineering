/*Wap To Print Pattern
A
A  B
A  B  C
A  B  C  D
A  B  C  D  E
*/
#include<stdio.h>
int main()
{
	int i,j,row;
	char k='A';
	printf("\nEnter row count = ");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		k='A';
		for(j=0;j<=i;j++)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
