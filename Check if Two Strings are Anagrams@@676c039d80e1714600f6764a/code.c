#include <stdio.h>
#include<string.h>
void sortstring(char str[])
{
    int len=strlen(str);
    char temp;
    for(int i=0;i<len-1;++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}
int main()
{
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("No");
        return 0;
    }
    sortstring(str1);
    sortstring(str2);
    if(strcmp(str1,str2)==0)
    [
        printf("Yes");
    ]
    else
    {
        printf("No");
    }
    return 0;
}