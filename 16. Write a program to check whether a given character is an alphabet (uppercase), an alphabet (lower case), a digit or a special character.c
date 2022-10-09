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
    else if(ch>='0' && ch<='9')
    {
        printf("Digit");
    }
    else
    {
      printf("Special symbol");
    }

    return 0;

}