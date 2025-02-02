#include <stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    int n;
    scanf("%d\n",&n);
    struct Student s1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f\n",&s1[i].roll,s1[i].name,s1[i].marks);   
    }
    int a;
    scanf("%d",&a);
    if(a==s1[i].roll)
    {
        printf("Roll Number: %d, Name: %s, Marks: %.2f");
    }
    else
    {
        printf("Student not found");
    }
    return 0;
}