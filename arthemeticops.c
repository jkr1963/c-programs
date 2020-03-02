#include<stdio.h>
void main()
{
int a,b;
float sum,pro,diff,div;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
sum=a+b;
pro=a*b;
if(a>b)
{
diff=a-b;
div=a/b;
}
else
{
diff=b-a;
div=b/a;
}
printf("Sum of two number=%f",sum);
printf("Product of two numbers=%f",pro);
printf("Difference between the two numbers=%f",diff);
printf("Quotient of the two numbers=%f",div);
}

