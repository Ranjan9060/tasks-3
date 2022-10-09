#include<stdio.h>
int main()
{
    int Hindi,English,Math,Physic,Chemistry;

    printf("Enter 5 Subject Marks :");

    scanf("%d%d%d%d%d",&Hindi,&English,&Math,&Physic,&Chemistry);

    if((Hindi>=33 && Hindi<=100) &&(English>=33 && English<=100) &&(Math>=33 && Math<=100)&&(Physic>=33 && Physic<=100)&&(Chemistry>=33 && Chemistry<=100))
    {
        printf("The candidate Passed");
    }
    else
    {
        printf("The candidate Fail");
    }

    return 0;

}
