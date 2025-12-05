//Rotate the array by k times to the left (counter-clockwise rotation)
/*
    Sample testcase 
    Input: 1 2 3 4 5 6 7, k = 3
Output: 5 6 7 1 2 3 4

    Logic :first reverse array index from 0 to k-1
     and then reverse index k to n-1
     then reverse full array
    */
#include <stdio.h>

int rotate_by_k(int arr[], int n, int k);

int main()
{
    int num,k;
    printf("Enter number of elements in an array ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter value to rotate array by k");
    scanf("%d",&k);

    rotate_by_k(arr,num,k);

    return 0;
}

int rotate_by_k(int arr[], int n,int k)
{
    //reverse 0 to k-1 elements in the array
    for(int i=0,j=k-1;i<j;i++,j--)
    {
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    //reverse kth to n elements in the array
    for(int i=k,j=n-1;i<j;i++,j--)
    {
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

     //Reverse whole array finally
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    printf("The array after moving right by k rotation : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}