#include <stdio.h>
#include<string.h>
void reverse(char str[],int start,int end)
{
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int start=0,len=strlen(str);
    for(int i=0;i<=len;i++)
    {

        if(str[i]==' '||str[i]=='\0')
        {
            reverse(str,start,i-1);
            start=i+1;
        }
    }
    printf("%s",str);
    return 0;
}