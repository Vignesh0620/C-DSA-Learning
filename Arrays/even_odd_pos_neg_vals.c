
//To find whether all numbers in array + / - also odd/even
#include<stdio.h>
#include<stdbool.h>

//Odd or even function
int odd_even(int n)
{
        if(n%2==0)
            return true;
        else
            return false;   

}

int pos_neg(int n)
{
    if(n>0)
        return true;
    else
        return false;
}

int main()
{
    int num;
    printf("Enter number of elements in an array ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of array:\n");
    for(int i=0;i<num;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        printf("Number %d is %s and %s\n",arr[i], (pos_neg(arr[i])) ? "Postive" : "Negative" , (odd_even(arr[i]) ? "Even" : "Odd"));
    }
}