#include<stdio.h>
int main()
{
int s;
float da,ha,gross;
printf("Enter the basic salary\n");
scanf("%d",&s);
da=0.4*s;
ha=0.2*s;
gross=s+ha+da;
printf("Gross salary = %f\n",gross);
}
