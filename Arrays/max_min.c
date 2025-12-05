//To Find max/min in array without sorting

#include <stdio.h>

void find_maxmin(int arr[], int n)
{
    int max =arr[0], min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return;
}


int main()
{
    int num;
    printf("Enter number of elements in array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d elements:\n", num);
    for(int i=0;i<num;i++)
        scanf("%d", &arr[i]);      
    find_maxmin(arr, num);
    return 0;
}