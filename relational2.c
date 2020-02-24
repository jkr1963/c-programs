#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
if (a==b)
{
printf("a is equal to b");
}
else if (a<b)
{
printf("a is smaller than b");
}
else 
{
printf("a is greater than b");
}
}
