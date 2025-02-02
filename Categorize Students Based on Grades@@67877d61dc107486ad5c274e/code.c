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
        scanf("%d %s %f",&s1[i].r, s1[i].n, &s1[i].m);
    }
    for(int i=0;i<n;i++)
    {
        char grade;
        if(s1[i].m>=85) 
         grade='A';
        else if(s1[i].m>=70)
         grade='B';
        else 
         grade='C';
        printf("Roll Number: %d, Name: %s, Grade: %c\n",s1[i],r,s1[i].n,grade);
    }
    return 0;
}