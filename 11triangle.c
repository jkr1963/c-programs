#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
 float s,x,area;
 printf("Enter 3 sides of triangle\n");
 scanf("%d%d%d",&a,&b,&c);
 s=(a+b+c)/2;
 x=(s*(s-a)*(s-b)*(s-c));
 area=sqrt(x);
 printf("Area of the riangle=%f\n",area);
}
 
