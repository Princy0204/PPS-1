#include<stdio.h>
#include<math.h>
void main()
{
    float n,x,i,j,sum=0,a=1,f=1;
    printf("enter values of x and n");
    scanf("%f%f",&x,&n);
    for(i=1;i<=n+2;i++)
    {
        f=f*i;
        for(j=1;j<=i;j+=2)
        {
            if(i==j)
            {
                sum=sum+a*pow(x,j)/f;
            }
            a=a*-1;
        }
    }
    printf("sum=%f",sum);
}
