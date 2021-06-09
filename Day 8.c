//Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.
#include <stdio.h>
int main()
{
  int choice,a,b;
  printf("1.Addition \n");
  printf("2.Subtraction \n");
  printf("3.Multiplication \n");
  printf("4.Division \n");
  scanf("%d",&choice);
  scanf("%d%d",&a,&b);   
  switch(choice)
  {
    case 1:

        printf("%d",a+b);
        break;
    case 2:
    
        printf("%d",a-b);
        break;
    case 3:
    
        printf("%d",a*b);
        break;
    case 4: if(b==0)
               
               printf("Cannot be determined");
               
            else
               printf("%.1f",(float)a/b);
            break;
    default:printf("Error");    
  }
   
    return 0;
}
