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
    struct Student s1;
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&s[1].r,s[1].n,&s1[i].m);
    }
    int topindex=0
    for(int i=1;i<n;i++)
    {
        if(s1[i].m<s1[topindex].m)
        {
            topindex=i;
        }
    }
    printf("Student with Minimum marks: Roll Number: %d, Name: %s, Matks: %.2f",s1[i].r,s1[i].n,s1[i].m);
    return 0;
}