#include <stdio.h>

int isPerfect(int num);

int main()
{
    int num, itr;

    printf("Enter an integer: ");
    scanf("%d", &num);
    for (itr = 1; itr <= num; itr++)
    {
        if (isPerfect(itr))
            printf("%d is a Perfect number.\n", itr);
    }
    return 0;
}

int isPerfect(int num)
{
    int sum=0;
    for(int i=1; i<=num/2;i++)
    {
        if(num % i == 0)
            sum += i;
    }
    return (sum == num);
}