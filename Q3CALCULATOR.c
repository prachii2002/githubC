#include <stdio.h>
#include <conio.h>
void main()
{
int d,choice;
int ch;
float a,b,c;
do
{
printf("enter two numbers:\n");
scanf("%f %f",&a,&b);
printf("enter choice\n1.add\n2.subtract\n3.multiply\n4.divide\n");
scanf("%d",&choice);
switch(choice)
{
 case 1 : c=a+b;
 printf("c=%f\n",c);
 break;
 case 2 : c=a-b;
 printf("c=%f\n",c);
 break;
 case 3 : c=a*b;
 printf("c=%f\n",c);
 break;
 case 4 : c=a/b;
 printf("c=%f\n",c);
break;
 default :
 printf("\ninvalid input! press any key to continue\n");
 }
 printf("\ndo you like to perform any other operation?\nIf yes, enter 5:\n ");
 scanf("%d",&ch);
 }
 while (ch==5);
getch();
}
