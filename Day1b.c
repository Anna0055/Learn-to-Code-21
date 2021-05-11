// Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)


#include <stdio.h>

int main() 
{
    char ch= 'A';
    int num= 'B';
    float f= 'C';
    double d= 'D';
    
    
    scanf("%c", &ch);
    printf("%c\n" ,ch);
    
    scanf("%d",&num);
    printf("%d\n" ,num);
    
    scanf("%f",&f);
    printf("%f\n" ,f);
      
    scanf("%lf",&d);  
    printf("%lf\n" ,d);
    
    
    return 0;
}
