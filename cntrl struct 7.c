#include <stdio.h>
void main()
{
    int temp;
    printf("enter temperature");
    scanf("%d",&temp);
    if(temp<0)
        printf("freezing weather");
    else if(temp<10)
        printf("very cold weather");
    else if(temp<20)
        printf("cold weather");
    else if(temp<30)
        printf("normal");
    else if(temp<40)
        printf("hot");
    else
        printf("very hot");
}
