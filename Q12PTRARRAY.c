#include <stdio.h>
void main()
{
    int arr[10];
    int  i;
    int * ptr = arr;    // Pointer to arr[0] 
    printf("Enter elements in array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }
    ptr = arr;
    printf("Array elements: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}
