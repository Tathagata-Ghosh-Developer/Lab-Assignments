/*Lab Assignment-3 10-03-2021 Tathagata Ghosh*/

/*Q5. Write a C function that takes input a two-dimensional array of integers and find the largest
integer among them and return it to calling function.*/

#include<stdio.h>

int main()
{
    int r , c ;
    printf("Enter the number of rows and columns respectively : ");
    scanf("%d%d", &r , &c );
    int arr[r][c];
    printf("Enter the elements of the array : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
    printf("The array : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t" , arr[i][j]);
        }
        printf("\n");
    }
    int max = arr[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j] > max)
                max = arr[i][j] ;
        }
    }
    printf("The largest number in the array : %d ", max );
    return 0;
}