#include <stdio.h>
#include<string.h>
#include<ctype.h>
void c(char str[])
{
    for(int i=0;str[i]!='\0',i++)
    {
        if(islower(str[i]))
        str[i]=toupper(str[i]);
    }
    // int i=0;
    // while(str[i]!='\0')
    // {
    //     str[i]=toupper(str[i]);
    //     i++;
    // }
}
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    c(str);
    printf("%s",str);
    return 0;
}
