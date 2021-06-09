//Write a C program to read n values from the user and store it in the array. Reprint the values stored in the array and also print the value of second element in the array.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()  
{
    int  arr[10],i,n;
    scanf("%d",&n);
    printf("Entered array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    printf("\n%d",arr[1]);
    return 0;
}
