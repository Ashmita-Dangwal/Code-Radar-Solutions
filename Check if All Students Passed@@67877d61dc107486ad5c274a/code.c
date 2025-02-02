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
    int n, allpassed=1;
    scanf("%d",&n);
    struct Student s1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&s1[i].r,s1[i].n,&s1[i].m);
    }
    for(int i=0;i<n;i++)
    {
        if(s1[i].m<50)
        {
            allpassed=0;
            break;
        }
    }
    if(allpassed)
    {
        printf("All Passed");
    }
    else
    {
        printf("Not All Passed");
    }
    return 0;
}