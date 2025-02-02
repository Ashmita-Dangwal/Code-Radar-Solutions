#include <stdio.h>
#include<string.h>
struct Book
{
    float p;
    char t[50];
    char a[50];
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Book b1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %f",b1[i].t, b1[i].a,&b1[i].p);
    }
    float t;
    scanf("%f",&t);
    printf("Books above price %.2f:\n",t);
    for(int i=0;i<n;i++)
    {
        if(b1[i].p>t)
        {
           printf("Title: %s, Author: %s, Price: %.2f",b1[i].t,b1[i].a,b1[i].p);
        }
    }
    return 0;
}