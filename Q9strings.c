#include <stdio.h>
#include <string.h>
void main()
{
    int i,val,reval;
    char s1[50],rev[50],s2[50],sub[50];
    printf("Enter string: ");
    scanf("%s",&s1);    
    printf("Length of %s is %d.\n",s1,strlen(s1));//length of string
    strcpy(rev,s1);
    printf("Reverse of %s is %s.\n",s1,strrev(rev));//reverse of string
    printf("Enter another string: ");
    scanf("%s",&s2);
    //equality of strings
    val=strcmp(s1,s2);
    val==0?printf("Both strings are the same\n"):printf("%s and %s are two different strings.\n",s1,s2);
    //palindrome checking
    if (strcmp(rev,s1)==0)
        printf("%s is a palindrome.\n",s1);
    else
        printf("%s is not a palindrome.\n",s1);
    //check substring
    printf("Enter substring: ");
    scanf("%s",&sub);
    if (strstr(s1,sub))
        printf("Substring %s is present in %s \n",sub,s1);
    else
        printf("Substring %s is absent in %s \n",sub,s1);   
}