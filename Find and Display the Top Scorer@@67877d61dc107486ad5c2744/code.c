#include <stdio.h>
#include<string.h>
struct Student 
{
    int roll;
    char name;
    float marks;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student students[i];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&students.roll[i],&students.name[i],&students.marks[i]);
    }
    float max=students.marks[0];
    for(int i=0;i<n;i++)
    {
        if(students.marks[i]>max[0])
        {
        max=students.marks[i];
        printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",stuents.roll[i],students.name[i],students.marks[i]);
        }
    }
    return 0;
}
