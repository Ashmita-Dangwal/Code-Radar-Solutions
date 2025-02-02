#include <stdio.h>
#include<string.h>
struct Student
{
    int roll;
    int name[50];
    float marks;
};
int main()
{
    int n;
    float s;
    scanf("%d\n",&n);
    struct Student students[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f\n",&students[i].roll,students[i].name,&students[i].marks);
        s+=students[i].marks;
    }
    float a;
    a=s/n;
    printf("Average Marks: %.2f",a);
    return 0;
}