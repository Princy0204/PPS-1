#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,fact=1;
    float x,sum=1;
    printf("ENTER NUMBER OF TERMS and value of X:");
    scanf("%d %f",&n,&x);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+pow(x,i)/fact;
    }
    printf("sum=%f",sum);
}
