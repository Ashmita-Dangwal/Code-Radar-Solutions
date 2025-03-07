#include<stdio.h>
#include<string.h>
void swap(char str1[],char str2[])
{
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
void bubbleSort(char arr[][100],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
               swap(arr[j],arr[j+1]);
               swapped=1;
            }
        }
        if(!swapped) break;
    }
}
void printArray(char arr[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s\n",arr[i]);
    }
   
}