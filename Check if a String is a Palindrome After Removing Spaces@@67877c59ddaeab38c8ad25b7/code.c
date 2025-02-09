#include <stdio.h>
void removespaces(char str[])
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
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
    char str[100];
    fgets(str,sizeof(str),stdin);
    removespaces(str);

    if(ispalindrome(str))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}