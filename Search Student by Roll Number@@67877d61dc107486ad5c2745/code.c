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
        scanf("%d %s %f\n",&s1[i].roll,s1[i].name,&s1[i].marks);   
    }
    int a;
    int found =0;
    scanf("%d\n",&a);
    for(int i=0;i<n;i++)
    {
        if(a==s1[i].roll)
        {
            printf("Roll Number: %d, Name: %s, Marks: %.2f",s1[i].roll,s1[i].name,s1[i].marks);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("Student not found\n");
    }
    return 0;
}