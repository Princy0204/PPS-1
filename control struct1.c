#include<stdio.h>
void main()
{
    int ts,bs;
    float hra,da,allow,pf;
    char ch;
    printf("enter grade");
    scanf("%c",&ch);
    printf("enter basic salary");
    scanf("%d",&bs);
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    if(ch=='A')
    {
        allow=1700;
    }
    else if (ch=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    ts=bs+hra+da+allow-pf;
    printf("%d",ts);
}
