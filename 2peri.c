#include<stdio.h>
void main()
{
float h,b,a,peri,area;
printf("Enter height");
scanf("%f",&h);
printf("Enter the breadth");
scanf("%f",&b);
printf("Enter the side");
scanf("%f",&a);
area=0.5*h*b;
peri=a+b+h;
printf("Area of the triangle=%f",area);
printf("Perimeter of the triangle=%f",peri);
}
