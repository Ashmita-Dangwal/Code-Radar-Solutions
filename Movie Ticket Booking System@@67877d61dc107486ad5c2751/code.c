#include <stdio.h>
#include<string.h>
struct Movie
{
    char m[50];
    char t[50];
    float p;
};
int main()
{
    float s=0,p=0,v=0;
    int n;
    scanf("%d",&n);
    struct Movie m1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %f",m1[i].m,m1[i].t.m1[i].p);
        if(strcmp(m1[i].t, "Standard")==0)
        {
            s+=m1[i].p;
        }
        else if(strcmp(m1[i].t, "Premium")==0)
        {
            p+=m1[i].p;
        }
        else if(strcmp(m1[i].t, "VIP")==0)
        {
            v+=m1[i].p;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",s,p,v);
    return 0;
}