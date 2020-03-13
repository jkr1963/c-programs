#include<stdio.h>
void main()
{ 
int a,b,c,d,e,sum;
float perc;
printf("Enter marks of five subjects\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
perc=sum/5;
if (perc>=90)
{
printf("Grade S");
}
else if (perc>80 && perc<=89)
{
printf("Grade A");
}
else if (perc>70 && perc<=79)
{
printf("Grade B");
}
else if(perc>60 && perc<=69)
{
printf("Grade C");
}
else
{
printf("FAIL");
}
}
 
