#include<stdio.h>
#include<math.h>

long long int dec_to_bin(int num);

int main()
{
    int num;
    long long int bin;

    printf("Enter an integer: ");
    scanf("%d", &num);

    bin = dec_to_bin(num);

    printf("Binary representation: %lld\n", bin);
    return 0;
}

long long int dec_to_bin(int num)
{
    int bin=0;
    int rem,i=1;
    while(num)
    {
        rem = num % 2;
        num/=2;
        bin += rem * i;
        i *= 10;
    }
    // Reverse the binary number to get the correct order
    int rev=0;
    while(bin)
    {
        int temp = bin % 10;
        rev = (rev*10)+temp;
        bin/=10;
    }

    rev= add_trailing_zeros(rev, 8); // Ensure at least 8 bits
    return rev;
}

int add_trailing_zeros(int bin, int total_bits)
{
    int count = 0;
    int temp = bin;

    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    while (count < total_bits)
    {
        bin = bin * 10; // Append a zero at the end
        count++;
    }

    return bin;
}