#include<stdio.h>
int main()
{
 int a,b,c,d,e,n,r;
 printf("Enter the 5 digit number\n");
 scanf("%d",&n);
 a=n%10;
 n=n/10;
 b=n%10;
 n=n/10;
 c=n%10;
 n=n/10;
 d=n%10;
 n=n/10;
 e=n%10;
 n=n/10;
 r=(a*10000)+(b*1000)+(c*100)+(d*10)+e;
 printf("The 5 digit number after reversing is %d\n",r);
}
