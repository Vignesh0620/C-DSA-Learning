#include<stdio.h>

//Declaration of reverse function
int reverse(int num);

int main()
{
    int num, rev=0,div=1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    rev = reverse(num);

    printf("Reversed Number: %d\n", rev);
    return 0;
}

int reverse(int num)
{
    int rev=0;
    while(num)
    {
        int temp = num % 10;
        rev = (rev*10)+temp;
        num/=10;
    }
    return rev;
}