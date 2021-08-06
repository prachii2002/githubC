#include <stdio.h>
#include <string.h>

struct emp
{
    char name[20];
    char designation[20];
    char gender[10];
    float salary;
    struct doj
    {
        int date;
        char month[20];
        int year;
    }d;
}e[20];
void members(int n);

void main()
{
    int i,n;
	printf("Enter number of employees : ");
	scanf("%d",&n);
    printf("\nEnter details : name,designation,gender,salary,doj{date,month,year} :\n");

    for(i=0;i<n;i++)
    {
        printf("Enter  details for employee :%d \n",(i+1));
        printf("Enter Name :");
        scanf("%s",e[i].name);
        printf("Enter Designation :");
        scanf("%s",e[i].designation);
		printf("Enter Gender :");
        scanf("%s",e[i].gender);
		printf("Enter Date :");
        scanf("%d",&e[i].d.date);
		printf("Enter Month :");
        scanf("%s",e[i].d.month);
		printf("Enter Year:");
        scanf("%d",&e[i].d.year);
		printf("Enter Salary :");
        scanf("%f",&e[i].salary);
        }

    printf("\nEMPLOYEE DETAILS :");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee :%d \n",(i+1));
        
        printf("Name :%s,",e[i].name);
       
        printf(" Designation :%s,",e[i].designation);
		
        printf(" Gender :%s,",e[i].gender);
		
        printf(" Doj :{ %d",e[i].d.date);
		
        printf(" %s",e[i].d.month);
		
        printf(" %d },",e[i].d.year);
		
        printf(" Salary :%f",e[i].salary);
        
    }

	members(n);
}

void members(int n)
{
	int c1=0,c2=0,value;

	for(int i=0;i<n;i++)
		{
        value=strcmp(e[i].designation,"manager");
        if (value==0)
            printf("\n\nEmployee(s) with designation as MANAGER : %s\n",e[i].name);
        }

    printf("\nEmployees with salary more than 20000 :\n");
    for (int i=0;i<n;i++)
		{         
        if (e[i].salary>20000)
			{
            printf("%s\n",e[i].name); 
			}
        }
	for (int i=0;i<n;i++)
	{
	    value=strcmp(e[i].gender,"female");        
        if (value==0)
		{
            c1++;  
		}
		else
		{
			c2++;
		}
	}
    printf("\nCount of male employees are %d\nfemale employees are %d.\n",c2,c1);
}













    

    
    