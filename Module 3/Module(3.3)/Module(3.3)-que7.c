/*WAP Find out length of string without using inbuilt function*/

#include <stdio.h>
int main()
{
    char str[100],i;
    printf("Enter a string: \n");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; ++i);
       printf("\nLength of input string: %d",i);
    
}

