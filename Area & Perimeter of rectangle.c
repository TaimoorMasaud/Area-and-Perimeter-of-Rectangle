#include<stdio.h>
int main()
{
    float length=0.0,width=0.0,Perimeter=0.0,Area=0.0;
    printf("\nEnter the length of rectangle :");
    scanf("%f",&length);
    printf("\nEnter the width of rectangle :");
    scanf("%f",&width);
    Area=length*width;
    Perimeter=2*(length+width);
    printf("\nThe Area of rectangle is : %f",Area);
    printf("\nThe Perimeter of rectangle is : %f",Perimeter);
}
