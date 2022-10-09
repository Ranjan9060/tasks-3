#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a Number :");

    scanf("%d",&num);

    if(num%7==0 || num%3==0)
    {
        printf("Divisible by 7 or divisible by 3");
    }
    else
    {
        printf("Not Divisible by 7 or divisible by 3");
    }

return 0;

}