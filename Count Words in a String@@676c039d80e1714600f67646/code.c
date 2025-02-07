#include <stdio.h>
#include<string.h>
int c(char str[])
{
    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        while(str[i]==' ')
        {
            i++;
        }
        if(str[i]!='\0')
        {
            count++;
        }
        // while(str[i]!=' '&& str[i]!='\0')
        // {
        //     i++;
        // }
    }
    return count;
}
int main()
{
    char str[100];
    scanf("%s",str);
    int vc=c(str);
    printf("%d",vc);
    return 0;
}