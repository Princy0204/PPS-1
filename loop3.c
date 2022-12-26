
#include<stdio.h>
void main()
{
    char i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }
}
