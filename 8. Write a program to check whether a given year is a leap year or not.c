#include<stdio.H>
int main()
{
    int year;

    printf("Enter a Year :");

    scanf("%d",&year);
    
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }
    else if(year%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}