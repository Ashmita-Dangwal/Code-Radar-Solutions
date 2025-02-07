#include <stdio.h>
#include<string.h>
void r(char str[])
{
    int start=0;
    int end=strlen(str)-1;
    while(star<end)
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
    scanf("%s",&str);
    r(str);
    printf("%s",str);
    return 0;
}