#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter Three Number :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
         printf("Greater Number is %d",a);
        }
        else
        {
         printf("Greater Number is %d",c);
        }
    }
    else if(b>c)
    
       {
         printf("Greater Number is %d",b);
       }
    else
       {
         printf("Greater Number is %d",c);
       }
    return 0;
}