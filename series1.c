#include<stdio.h>
void main()
{
    int i,n,fact=1,sum=0;
    printf("ENTER NUMBER OF TERMS:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("sum=%d",sum);
}
