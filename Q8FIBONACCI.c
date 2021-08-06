#include <stdio.h>
void main()
{
    int n,i,f;
    printf("enter number of terms :\n");
    scanf("%d",&n);
    printf("FIBONACCI SERIES: \n");
    
    for (int i=1;i<(n+1);i++)
    {
        int f = fibo(i);
        printf("%d",f);
        printf("\n");
    }
}
int fibo(int n)
{
    if (n==1)
        return (0);
    else if (n==2)
        return (1);
    else
        return fibo(n-1) + fibo(n-2);
}

    
    
    
    
    
    



