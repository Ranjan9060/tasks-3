#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character :");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("Lower Alphabet");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Upper Alphabet");
    }
    else
    {
       printf("Special Symbol");
    }
    return 0;
}