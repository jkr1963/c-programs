#include<stdio.h>
void main()
{
int a,b,c;
int ch;
printf("Enter a and b values");
scanf("%d%d",&a,&b);
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1: 
       c=a+b;
       printf("sum=%d",c);
       break;
case 2: 
       c=a-b;
       printf("Difference=%d",c);
       break;
default :
       printf("Invalid");
       break;
}
}
                                                                       
