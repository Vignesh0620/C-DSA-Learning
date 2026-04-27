#include <stdio.h>
#include <stdint.h>

int primecheck(int num)
{
    int flag=0;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;

}


int main()
{
    int val;
    printf("Enter the Value to Check prime or not:\n");
    scanf("%d",&val);

    int res = primecheck(val);

    if(res)
        printf("Number is not prime");
    else
        printf("Number is prime");

    return 0;
}