#include <stdio.h>
#include<string.h>
struct sub
{
    char n[50];
    char t[20];
    float p;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct sub s1[n];
    int b=0,st=0,p=0;
    float br=0,sr=0,pr=0;
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
            p++;
            pr+=s1[i].p;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f\n",b,br);
    printf("Standar: %d Users, Revenue: %.2f\n",st,sr);
    printf("Premium: %d Users, Revenue: %.2f\n",p,pr);
    return 0;
}