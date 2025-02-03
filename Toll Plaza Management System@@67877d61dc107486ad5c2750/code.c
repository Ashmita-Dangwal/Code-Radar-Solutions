#include <stdio.h>
#include<string.h>
struct Vehicle
{
    char n[50];
    char m[50];
    float p;
};
int main()
{
    float c=0,t=0,b=0;
    int n;
    scanf("%d",&n);
    struct Vehicle v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %f",v[i].n,v[i].m,&v[i].p);
        if(strcmp(v[i].m,"Car")==0)
        {
            c+=v[i].m;
        }
        else if(strmp(v[i].m,"Truck")==0)
        {
            t+=v[i].m;
        }
        else if(strcmp(v[i].m,"Bike")==0)
        {
            t+=v[i].m;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n",c,t,b);
    return 0;    
}