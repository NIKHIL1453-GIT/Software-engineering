/*WAP to show  
1. Monday to Sunday using switch case  
2. Vowel or Consonant using switch case*/
#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter the number 1 TO 7 for the day = ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("SUNDAY");
		break;
		
		case 2:
			printf("MONDAY");
		break;
		
		case 3:
			printf("TUESDAY");
		break;
		
		case 4:
			printf("WEDNESDAY");
		break;
		
		case 5:
			printf("THURSDAY");
		break;
		
		case 6:
			printf("FRIDAY");
		break;
		
		case 7:
			printf("SATURDAY");
		break;
		default:
		printf("invalid input.");
	}
	printf("\n");
	char ch;
	up:
	printf("\nEnter only one character = ");
	scanf(" %c",&ch);
	if(((ch>=65 && ch<=90) || (ch>=97 && ch<=122)))
	{
		switch(ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("\n%c is the vowel",ch);
				break;
			default:
				printf("%c is the consonant",ch);
		}
	}
	else
	{
		printf("\nPlease enter alphabets!!");
		goto up;
	}
	return 0;
}
