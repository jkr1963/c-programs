#include<stdio.h>
int main()
{
 int a,b,c,d,e,n,sum=0;
 printf("Enter the 5 digit number\n");
 scanf("%d",&n);
 a=n%10;
 sum=sum+a;
 n=n/10;
 b=n%10;
 sum=sum+b;
 n=n/10;
 c=n%10;
 sum=sum+c;
 n=n/10;
 d=n%10;
 sum=sum+d;
 n=n/10;
 e=n%10;
 sum=sum+e;
 printf("The sum of digits=%d\n",sum);
}
 
