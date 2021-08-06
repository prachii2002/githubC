#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{

    char a[50],b[50];
int i=0;
    printf("enter string\n");
    gets(a);

   // l=strlen(a);
    while(a[i]!='\0')
    { //printf("inside while \n");
     if (a[i]=='.')
     {
        b[i]=',';
        }
     if( a[i]>='a'&& a[i]<='z')
     {
        b[i]=a[i]-32;
        }
     if( a[i]>='A'&& a[i]<='Z')
     {
        b[i]=a[i]+32;
         }
         i++;
     }
     b[i]='\0';
     puts(a);
     puts(b);
     getch();
}
