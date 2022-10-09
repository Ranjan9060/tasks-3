#include<stdio.h>
int main()
{
    int num;

    printf("Enter a Number :");

    scanf("%d",&num);

    if(num%3==0 && num%2==0)
    {
        printf("Divisible by 3 and 2");
    }
    else
    {
        printf("Not Divisible by 3 and 2");
    }

    return 0;
}