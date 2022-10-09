#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    while(1)
   {
    printf("\nExtit->0 : \nEnter the Month Number :");
    scanf("%d",&num);
    switch(num)
    {
         case 0 :
         exit (0);//extit function
                break;
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
        printf("31 Days This Month");
                break;

        case 2 :

        printf("28,29 Day This Month");
                  break;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
        printf("30 Day This Month ");
                break;
       
       default :

       printf("Invalid Month Digits");

    }
  
    }

    return 0;
}