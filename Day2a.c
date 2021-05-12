//Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input.


#include <stdio.h>
int main()
{
    int a,b;
    int sum,sub,mult;
    float div;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    sum=a+b;
    sub=a-b;
    mult=a*b;
    div=(float)a/b;
    
    
    printf("%d\n" , sum);
    printf("%d\n" , sub);
    printf("%d\n" , mult);
    printf("%.2f\n" , div);
    

    
    return 0;
}
