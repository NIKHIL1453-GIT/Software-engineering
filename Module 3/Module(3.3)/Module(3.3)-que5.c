/*5-WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice*/
#include<stdio.h>
int main()
{
	int size,a[100],b[100],i,j,temp,choice;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	printf("\nEnter first Array:");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter Second Array:");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("\n1.Ascending Order");
	printf("\n2.Descending Order");
	printf("\nMake a choice = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\nOriginal array's = ");
		printf("\na[%d]= ",size);
		for(i=0;i<size;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\nb[%d]= ",size);
		for(i=0;i<size;i++)
		{
			printf("%d ",b[i]);
		}	
		printf("\nAcending ordered array's = ");
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(a[i]>a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		printf("\na[%d]= ",size);
		for(i=0;i<size;i++)
		{
			printf("%d ",a[i]);
		}
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(b[i]>b[j])
				{
					temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}
		printf("\nb[%d]= ",size);
		for(i=0;i<size;i++)
		{
			printf("%d ",b[i]);
		}
		break;
		
		case 2:
		printf("\nOriginal array's = ");
		printf("\na[%d]= ",size);
		for(i=0;i<size;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\nb[%d]= ",size);
		for(i=0;i<size;i++)
		{
			printf("%d ",b[i]);
		}
		printf("\nDecending ordered array's = ");
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(a[i]<a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		printf("\na[%d]= ",size);
		for(i=0;i<size;i++)
		{
			printf("%d ",a[i]);
		}
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(b[i]<b[j])
				{
					temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}
		printf("\nb[%d]= ",size);
		for(i=0;i<size;i++)
		{
			printf("%d ",b[i]);
		}
		break;
	}
	return 0;
}
