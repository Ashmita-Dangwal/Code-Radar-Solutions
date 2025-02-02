#include <stdio.h>
#include<string.h>
struct Student
{
    int r;
    char n[50];
    float m;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student s1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&s1[i].r,s1[i].n,&s1[i].m);
    }
    int c=0;
    float t;
    scanf("%f",&t);
    for(int i=o;i<n;i++)
    {
        if(s1[i].m>t)
        {
            c++;
        }    
    }
    printf("Count of students scoring above %.2f: %d\n",t,c);
    return 0;

}
