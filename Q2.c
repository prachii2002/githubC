#include <stdio.h>
#include <conio.h>
void main()
{
int a[5];
int i,sum=0,min,max;
float avg;
printf("enter array elements\n");
for(i=0;i<5;i++)
{
 scanf("%d",&a[i]);
 sum+=a[i];
 }
avg=sum/5.0;
printf("sum of elements=%d\naverage of elements=%f\n",sum,avg);
min=a[0];
for(i=1;i<5;i++)
{
 if (a[i]<min)
 {
 min=a[i];
 }
 }
printf("minimum number=%d\n",min);
max=a[0];
for(i=1;i<5;i++)
{
 if (a[i]>max)
 {
 max=a[i];
 }
 }
printf("maximum number=%d\n",max);
getch();
}