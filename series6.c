#include<stdio.h>
#include<math.h>
int main()
{
    float i,j,n,x,sum=1,f=1,a=(-1);
    printf("enter value of x and n");
    scanf("%f%f",&x,&n);
    for(i=2;i<=n+2;i++)
    {
        f=f*i;
        for(j=2;j<=i;j+=2)
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
