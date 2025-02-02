#include <stdio.h>
#include<string.h>
struct Book
{
    int p;
    char b[50];
    char a[50];
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Book b1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d",b1[i].b, b1[i].a,&b1[i].p);
    }
    int t;
    scannf("%d",&t);
    for(int i=0;i<n;i++)
    {
        if(b1[i].p>t)
        {
           printf("Title: %s, Author: %s, Price: %.2f",b1[i].b,b1[i].a,b1[i].p);
        }
    }
    return 0;
}