#include <stdio.h>
#include <string.h>
struct Subscription
{
    char n[50];
    char t[20];
    float p;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Subscription s1[100];
    int b=1,st=1,pt=1;
    float br=0.0,sr=0.0,pr=0.0;
    for(int i=0,i<n,i++)
    {
        scanf("%s %s %f",s1[i].n,s1[i].t,&s1[i].p);
        if(strcmp(s1[i].t, "Basic")==0)
        {
            b++;
            br+=s1[i].p;
        }
        else if(strcmp(s1[i].t, "Standard")==0)
        {
            st++;
            sr+=s1[i].p;
        }
        else if(strcmp(s1[i].t, "Premium")==0)
        {
            pt++;
            pr+=s1[i].p;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f;\n",b,br);
    printf("Standard: %d Users, Revenue: %.2f;\n",st,sr);
    printf("Premium: %d Users, Revenue: %.2f;\n",pt,pr);
    return 0;
}