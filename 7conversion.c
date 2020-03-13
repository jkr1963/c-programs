#include<stdio.h>
void main()
{
 int n,year,month,week,days;
 printf("Enter the number of days\n");
 scanf("%d",&n);
 year=n/365;
 n=n-(365*year);
 month=n/30;
 n=n-(30*month);
 week=n/7;
 days=n-(7*week);
 printf("Years=%d\n",year);
 printf("Months=%d\n",month);
 printf("Weeks=%d\n",week);
 printf("Days=%d\n",days);
}
 
