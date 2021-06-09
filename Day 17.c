//Write a C program to check whether a number present in the 1D array or not.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int arr[100],n,i,b;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        if (arr[i]==b)
        {
            printf("%d is present in this array",b);
            return 0;
        }
    }  
    printf("%d is not present in this array",b);
   
   
    return 0;
}
