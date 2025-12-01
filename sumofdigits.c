#include <stdio.h>
#include <stdint.h>

int sum_of_dig(long long int num)
{
    long long int sum = 0;
    while (num)
    {
        int dif = num % 10;
        sum += dif;
        num/= 10;
    }
    return sum;
}

int main()
{
    long long int val;
    printf("Enter the number to find sum of digits:\n");
    scanf("%lld",&val);
    long long int ans=sum_of_dig(val);
    printf("Sum of digits of %lld is : %lld", val,ans);
}
    