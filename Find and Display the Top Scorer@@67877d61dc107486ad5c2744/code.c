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
        scanf("%d %s %f",&students.roll[i],&students.name[i],&students.marks[i]);
    }
    int topindex=0;
    for(int i=0;i<n;i++)
    {
        if(students[i].marks>students[topindex].marks)
        {
        topindex=i;
        printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",stuents[topindex].roll,students[topindex].name,students[topindex].marks);
        }
    }
    return 0;
}
