#include<stdio.h>
int main()
{
    float cost,selling,profit,loss;

    float percentage;

    printf("Enter  selling and cost :");

    scanf("%f%f",&cost,&selling);

    if(selling>cost)
{
    profit=selling-cost;

    percentage=((profit*100)/cost);

    printf("Profit Percentage :%f",percentage);
     
}
else if(cost>selling)
{
     loss=cost-selling;

     percentage=((loss*100)/cost);

     printf("Loss Percentage :%f",percentage);
     

}
else
   {
     printf("No Profit No Loss");
   }

    return 0;

}