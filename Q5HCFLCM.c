#include <stdio.h>
#include <conio.h>
void main()
{
 int n1,n2,gcd,lcm,i=1,min;

 printf("enter two numbers:\n");
 scanf("%d %d",&n1,&n2);
 min=(n1<n2)?n1:n2;
 while(i<=min)
 {
     if(n1%i==0 && n2%i==0)
     {
	 gcd=i;
	 }
     i++;
     }
 lcm=(n1*n2)/gcd;
 printf("GCD = %d\nLCM = %d\n",gcd,lcm);
 getch();
 }