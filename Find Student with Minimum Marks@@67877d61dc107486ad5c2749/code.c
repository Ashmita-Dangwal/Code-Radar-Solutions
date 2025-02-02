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
    int topindex=0;
    for(int i=1;i<n;i++)
    {
        if(s1[i].m<s1[topindex].m)
        {
            topindex=i;
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",s1[topindex].r,s1[topindex].n,s1[topindex].m);
    return 0;
}