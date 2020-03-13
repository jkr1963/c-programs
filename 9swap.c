#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter two numbers\n");
 scanf("%d%d",&a,&b);
 printf("Values before swapping %d%d\n",a,b);
 c=a;
 a=b;
 b=c;
 printf("Values after swapping %d%d\n",a,b);
}
