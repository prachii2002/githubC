#include <stdio.h>
#include <conio.h>
void main()
{
 int num;
 int rev=0,rem;

 printf("enter number:\n");
 scanf("%d",&num);
 while (num!=0)
 {
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
     }
 printf("\nthe reverse of number is %d",rev);
 getch();
 }