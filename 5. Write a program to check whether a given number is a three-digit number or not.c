#include<stdio.h>
int main()
{
    int num,count=0;

    printf("Enter a Number:");

    scanf("%d",&num);

    while(num!=0)
    {
        num%10;

        num=num/10;

        count++;
    }
    if(count==3)
    {
        printf("This is Three-digit Number");
    }
    else
    {
        printf("Not Three- digit Number");
    }

    return 0;

}