#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter First Side :");

    scanf("%d",&a);

    printf("Enter Second Side :");

    scanf("%d",&b);

    printf("Enter Third Side :");

    scanf("%d",&c);
    
    if(a+b>c && b+c>a && c+a>b)
    {
       printf("Triangle Possible");
    }
    else
    {
        printf("Triangle Not Possible");
    }

    return 0;

}