#include <stdio.h>
#include<string.h>
struct sub
{
    char n[50];
    char t[50];
    float p;
};
int main()
{
    int n;
    scanf("%d",&n);
    stuct sub s[n];
    int b,s,p=0;
    float br,sr,pr=0;
    for(int i=0,i<n,i++)
    {
        scanf("%s %s %f",s[i].n,s[i].t,&s[i].p)
        if(strcmp(s[i].t, "Basic")==0)
        {
            b++;
            br+=s[i].p;
        }
        else if(strcmp(s[i].t, "Standard")==0)
        {
            s++;
            sr+=s[i].p;
        }
        else if(strcmp(s[i].t, "Premium")==0)
        {
            p++;
            pr+=s[i].p;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f",b,br);
    printf("Standar: %d Users, Revenue: %.2f",s,sr);
    printf("Premium: %d Users, Revenue: %.2f",p,pr);
    return 0;
}