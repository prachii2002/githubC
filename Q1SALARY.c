#include<stdio.h>
#include<conio.h>
void main()
{
 float gross,basic,net,hra,ta,proftax;
 printf("enter basic salary\n");
 scanf("%f",&basic);
 printf("professional tax\n");
 scanf("%f",&proftax);
 ta=0.2*basic;
 hra=0.3*basic;
 gross=basic+hra+ta;
 net=gross-proftax;
 printf("gross salary : %f ",gross);
 printf("net salary : %f",net);
 getch();
}