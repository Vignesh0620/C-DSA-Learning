/*Given an N×N matrix stored as int a[N][N], rotate it 90° clockwise in-place (no new N×N array). 
Use loops + a helper function to rotate one layer.*/

#include <stdio.h>
#include <stdint.h>

int rotate90(int a[10][10], int n)
{
    for(int i=0; i<n/2; i++)
    {
        for(int j=i; j<n-i-1; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[n-j-1][i];
            a[n-j-1][i] = a[n-i-1][n-j-1];
            a[n-i-1][n-j-1] = a[j][n-i-1];
            a[j][n-i-1] = temp;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the size of N x N matrix:\n");
    scanf("%d",&n);

    int a[10][10];
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    rotate90(a, n);

    printf("Matrix after 90 degree rotation:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

