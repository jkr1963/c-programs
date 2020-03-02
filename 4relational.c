#include<stdio.h>
void main()
{
int a,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
if (a>b)
{
printf("a is greater than b\n");
}
else
{
printf("a is smaller than b\n");
}
if (a>=b)
{
printf("a is greater than or equal to b\n");
}
else
{
printf("b is greater than or equal to a\n");
}
if (a==b)
{
printf("A is equal to b\n");
}
else
{
printf("a and b are not equal\n");
}
}
