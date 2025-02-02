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
        scanf("%d %s %f",&s1[i].r,s1[i].n,&s1[i],m);
    }
    for(for int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s1[j]<s1[j+1].m)
            {
                struct Student temp = s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("Roll Number: %d, Name: %s, Marks: %.2f",s1[i].r,s1[i].n,s1[i].m);
    }
    return 0;
}