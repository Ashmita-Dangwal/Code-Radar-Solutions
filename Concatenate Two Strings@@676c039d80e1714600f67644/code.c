#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100],result[200];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    strcpy(result,str1);
    strcat(result,"");
    strcat(result, str2);
    printf("%s",result);
    return 0;
}