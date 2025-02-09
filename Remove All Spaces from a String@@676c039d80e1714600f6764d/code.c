#include <stdio.h>
#include<string.h>
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
int main()
{
    char str[1000];
    fget(str,sizeof(str),stdin);
    removespaces(str);
    printf("%s",str);
    return 0;
}