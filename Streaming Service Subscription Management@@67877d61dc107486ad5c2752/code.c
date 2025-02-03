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
    struct sub s[n];
    int b=0,s=0,p=0;
    float br=0,sr=0,pr=0;
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
    printf("Basic: %d Users, Revenue: %.2f\n",b,br);
    printf("Standar: %d Users, Revenue: %.2f\n",s,sr);
    printf("Premium: %d Users, Revenue: %.2f\n",p,pr);
    return 0;
}