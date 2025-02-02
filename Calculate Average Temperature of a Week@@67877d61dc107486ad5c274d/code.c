#include <stdio.h>
#include<string.h>
struct Day
{
    char d[50];
    int t;
};
int main()
{
    int sum=0;
    struct Day s[8];
    for(int i=0;i<7;i++)
    {
        scanf("%s %d",s[i].d,&s[i].t);
        sum=+=t;
    }
    float a=sum/7;
    printf("Average Temperature: %.2f",a);
    return 0;
}