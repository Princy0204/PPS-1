#include <stdio.h>
void main()
{
       char ch;
    printf("enter alphabet");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u')
        printf("vowel");
        else
            printf("consonent");
}
