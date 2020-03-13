#include<stdio.h>
void main()
{
 int m1,m2,m3,m4,m5;
 float avg,total;
 printf("Enter marks of 5 subjects\n");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/5;
printf("Total of 5 subjects=%f\n",total);
printf("Average of 5 subjects+%f\n",avg);
}

