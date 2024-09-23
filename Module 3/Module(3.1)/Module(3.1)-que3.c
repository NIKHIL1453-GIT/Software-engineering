//WAP to find area of circle, rectangle and triangle
#include<stdio.h>
int main()
{
	float aoc,aor,aot,rad,len,wid,base,h;
	printf("\nEnter the radius of Circle = ");
	scanf("%f",&rad);
	printf("\nEnter the length of Rectangle = ");
	scanf("%f",&len);
	printf("\nEnter the Width of Rectangle = ");
	scanf("%f",&wid);
	printf("\nEnter the base of Triangle = ");
	scanf("%f",&base);
	printf("\nEnter the height of Triangle = ");
	scanf("%f",&h);
	aoc=((3.14)*(rad*rad));
	printf("\nArea of Circle is = %.3f",aoc);
	aor=(len*wid);
	printf("\nArea of Rectangle is = %.3f",aor);
	aot=((0.5)*(base)*(h));
	printf("\nArea of Triangle is = %.3f",aot);
	return 0;
}
