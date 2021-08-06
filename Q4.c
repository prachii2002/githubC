#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float b,s,c;
    int a,i,count=0,choice,ch;
    long p=1;
    int ct,ct1,check;
    

    do
    {
    	printf("enter number\n");
    	scanf("%d",&a);
    	printf("enter choice:\n1.squareroot\n2.square\n3.cube\n4.prime\n5.factorial\n6.prime factors\n");
    	scanf("%d",&choice);
    	switch(choice)
	    {
      		case 1 : b= sqrt(a);
                	 printf("square root of %d=%f\n",a,b);
	                 break;
     		case 2 : s=pow(a,2);
                         printf("square of %d=%f\n",a,s);
	                 break;
     		case 3 :  c=pow(a,3);
               		 printf("cube of %d=%f\n",a,c);
	      		 break;
     		case 4 : for(i=2;i<=a-1;i++)
		 	         {
			 	     if(a%i!=0)
  					  {
  					     count++;
  				 	  }
 			         }

	      		     if (count==a-2)
		 	         {
 	          	         printf("%d is prime\n",a);
   			          }
	     		     else
		 	         {
 		 		         printf("%d is not prime\n",a);
	    		         break;
		 	           }
     		case 5 : for (i=1;i<=a;i++)
                     {
                        p=p*i;
                        }
                    
                    printf("factorial of %d=%ld",a,p);
                    break;
            case 6 : printf("\nThe prime factors series bw 1 and %d: \n",a);

                        for (ct = 2; ct <= a; ct++)
                            {
	                            check = 0;
	                            for (ct1 = ct-1; ct1 > 1; ct1--)
	                            {
	                                if (ct%ct1 == 0)
	                                {
		                                check++;
		                                break;
	                                }
	                            }
	                        if (check == 0)
	                        {	
	                            if (a%ct == 0)
	                            {
		                            printf("%d ",ct); 
	                            }   
	                         }
                        }       
	    }            
                    
                    
    printf("\ndo you like to perform any other operation?\nIf yes, enter 5:\n ");
    scanf("%d",&ch);
    }
    while (ch==5);

    getch();
    }





