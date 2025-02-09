#include <stdio.h>
#include<string.h>
#include<ctype.h>
void removespaces(char str[])
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            str[j]=tolower(str[i]);
            j++;
        }
        i++;
    }
    str[j]='\0';
}
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
        l++;
        r--;
    }
    return 1;
}
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    removespaces(str);
    if(ispalindrome(str))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}