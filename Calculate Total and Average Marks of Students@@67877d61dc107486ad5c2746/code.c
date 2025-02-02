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
    float s,a;
    scanf("%d\n",&n);
    struct Students s1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f\n",&s1[i].r,s1[i].n,&s1[i].m);
        s+=s1[i].m;
    }
    a=s/n;
    printf("Total Marks: %.2f\n",s);
    printf("Average Marks: %.2f\n",a);
    return 0;
}