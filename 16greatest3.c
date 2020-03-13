#include<stdio.h>
void main()
{ 
 int a,b,c;
 printf("Enter three numbers\n");
 scanf("%d%d%d",&a,&b,&c);
 if (a>b && a>c)
 { 
  printf("%d is the greatest\n",a);
 }
 else if (b>c && b>a)
 {
  printf("%d is the greatest\n",b);
 }
 else
 {
  printf("%d is the greatest\n",c);
 }
}
