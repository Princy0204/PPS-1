#include<stdio.h>
void main()
{
    int y;
    printf("enter year",y);
    scanf("%d",&y);
    (y%4==0&y%400==0||y%100!=0)?printf("leap year"):printf("not leap year");

}
