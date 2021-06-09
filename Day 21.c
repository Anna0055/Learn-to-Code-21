//Write a C Program to read a 2D Array and then display it.

#include<stdio.h>
int main(){
   
   int i,j,a[10][10],m,n;
   scanf("%d",&m);
   scanf("%d",&n);
   
   for(i=0; i<m; i++) 
   {
      for(j=0;j<n;j++) 
      {
         
         scanf("%d", &a[i][j]);
      }
   }
   
   for(i=0; i<m; i++) 
   {
      for(j=0;j<n;j++) 
      {
         printf("%d ", a[i][j]);
        
      }  
            printf("\n");
      
   }
   return 0;
}
