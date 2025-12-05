//To reverse an array without extra array

#include<stdio.h>

int main()
{
    int num;
    printf("Enter number of elements in an array ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=num-1; i<num/2 ; i++, j--)
    {
        //Swap two variables
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Find the reversed array below\n");
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
