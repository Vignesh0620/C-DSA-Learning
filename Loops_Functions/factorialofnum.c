//Program for factorial of number

#include <stdio.h>
#include <stdint.h>

int fact (int n)
{
    int fac = 1;
    for(int i=1;i<=n;i++)
        fac*=i;

    return fac;
}

void main()
{
    int val;
    printf("Enter the number to find factorial:\n");
    scanf("%d",&val);
    int ans=fact(val);
    printf("Factorial of %d is : %d", val,ans);
}