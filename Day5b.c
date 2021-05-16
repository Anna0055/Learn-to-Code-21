//Write a C Program to determine the factorial of a 

#include <stdio.h>
int main(){
  int i,f,num;
  f=1;

  
  scanf("%d",&num);
    
  if(num<0)
      
    printf("ERROR");
  else
  
  {

   for(i=1;i<=num;i++)
   {    
      f=f*i;
   }    

  printf( "%.0d",f);
  }    
}

