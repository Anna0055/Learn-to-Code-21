// Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input

#include <stdio.h>



int main() {

    
    int side , square;
    float radius,circle;
    float base,height,triangle;
    
    scanf("%d",&side);
    scanf("%e",&radius);
    scanf("%f %f",&base,&height);
    
    square = side*side;
    circle = 3.14 * radius * radius;
    triangle = 0.5 * base * height;
    
    printf("%d\n",square);
    printf("%.1f\n",circle);
    printf("%.2f\n",triangle);
    
    
    return 0;
}
