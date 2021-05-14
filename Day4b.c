//Write a C Program to find the maximum and minimum from three user inputted numbers.

#include <stdio.h>

int main() {

    int a,b,c,max,min;
    
    
    scanf("%d%d%d",&a,&b,&c); 
    
    max = min = a;
        
    if(b>max)
    {
        max=b;
    }
    if(c>max) 
    {
        max=c;
    }
    if(b<min)
    {
        min=b;
    }    
    if(c<min)
    {
        min=c;
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}
