#include<stdio.h>
void main()
{
int a,b,c;
printf("enter sides of triangle");
scanf("%d%%d%d",&a,&b,&c);
if(a==b&&b==c)
    printf("equilateral");
else if(a==b||b==c||c==a)
    printf("isosceles");
else
    printf("scalene");
}
