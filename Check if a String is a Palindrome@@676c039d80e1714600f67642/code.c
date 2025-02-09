#include <stdio.h>
#include<string.h>
int ispalindrome(char str[])
{
    int l=0;
    int r=strlen(str)-1;
    while(l<r)
    {
        if(str[l]!=str[r])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    scanf("%s",str);
    if(ispalindrome(str))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}