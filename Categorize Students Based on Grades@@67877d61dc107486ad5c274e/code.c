#include <stdio.h>
#include<string.h>
struct Student
{
    int r;
    char n[50];
    float m;
};
char getgrade(float m)
{
    if(m>= 85) return 'A';
    else if(m>=70) return 'B';
    else return 'C';
}
int main()
{
    int n;
    scanf("%d",&n);
    struct Student s1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&s1[i].r,s1[i].n,&s1[i].m);
    }
    for(int i=0;i<n;i++)
    {
        char grade=getgrade(s1[i].m);
        printf("Roll NUmber: %d, Nmae: %s, Grade: %c",s1[i],r,s1[i].n,grade);
    }
    return 0;
}