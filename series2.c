#include<stdio.h>
void main()
{
    int i,fact=1,n=5;
    float sum=0;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact/i;
    }
    printf("sum=%f",sum);
}
