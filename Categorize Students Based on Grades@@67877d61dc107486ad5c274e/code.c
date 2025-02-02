#include <stdio.h>
#include<string.h>
struct Student
{
    int r;
    char n[50];
    float ma;
};
char getGrade(float m)
{
    if(m>=85) return 'A';
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
        scanf("%d %s %f",&s1[i].r,s1[i].n,&s1[i].ma);
    }
    for(int i=0;i<n;i++)
    {
        char grade=getGrade(s1[i].ma);
        printf("Roll Number: %d, Name: %s, Grade: %c\n",s1[i],r,s1[i].n,grade);
    }
    return 0;
}