#include <stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char name[30];
    float marks;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].roll,students[i].name,students[i].marks);
    }
    return 0;
}