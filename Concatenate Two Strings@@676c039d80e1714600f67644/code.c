#include <stdio.h>
int main()
{
    char str1[100], str2[100],result[200];
    fgets(str1,sizeof(srt1),stdin);
    fgets(str2,sizeof(srt2),stdin);
    str1[strcspn(str1,"\n")]='\0';
    str1[strcspn(str2,"\n")]='\0';
    strcpy(result,str1);
    strcat(result," ");
    strcat(result, str2);
    printf("%s",result);
    return 0;
}