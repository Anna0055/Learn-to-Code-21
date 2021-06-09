//Fibonacci Series
//Write a C program to print the above series starting from 0 and the upperlimit is determined by the use
#include<stdio.h>
int main()
{
int first=0, second=1, i, n, sum=0;
scanf("%d",&n);


for(i=0 ; i<n ; i++)
{
if(i <= 1)
{
sum=i;
}
else
{
sum=first + second;
first=second;
second=sum;
}
printf("%d ",sum);
}
return 0;
}
