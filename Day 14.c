//Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float d,real,img,root1,root2;
    scanf("%d%d%d",&a,&b,&c);
    
    d=(b*b)-(4*a*c);

    
    if(d<0)
    {
       real=(-b)/(float)(2*a);
       img=sqrt(-d)/(float)(2*a);
        
       printf("Complex: %0.2f + i%0.2f , %0.2f - i%0.2f ",real,img,real,img);
    }
    else if (d>0)
    {
        root1=(-b+sqrt(d))/(float)(2*a);
        root2=(-b-sqrt(d))/(float)(2*a);
        
        printf("Distinct Real : %0.2f , %.2f",root1,root2);
    }
    else
    {
        root1=root2=(-b)/(float)(2*a);
        printf("Equal Real: %0.2f , %.2f",root1,root2);
    }

   return 0; 
}
