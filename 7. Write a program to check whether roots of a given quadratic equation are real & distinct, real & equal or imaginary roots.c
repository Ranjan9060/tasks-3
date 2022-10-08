#include<stdio.H>
int main()
{
    int a,b,c,D;

    printf("Enter a,b and c :");

    scanf("%d%d%d",&a,&b,&c);

    D=b*b-4*a*c;
    
    if(D>0)
    {
        printf("Real Roots");
    }
    else if(D==0)
    {
        printf("Equal Roots");
    }
    else
    {
        printf("Imaganry Roots");
    }
    return 0;
}