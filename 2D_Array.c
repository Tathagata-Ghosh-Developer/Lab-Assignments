/*Lab Assignment-3 26-02-2021 Tathagata Ghosh*/

/*Q3. Write a C program that first reads, row by row, a 2-Dimensional array of size n × n, where
n is an input parameter. The program should then determine whether the array falls into
any of the following special cases:
a. Symmetric, Aij = Aji for all i, j.
b. Lower Triangular, Aij = 0 when i < j.
c. Diagonal, Aij = 0 when i ≠ j.
 Also find the sum of two diagonals. */

#include<stdio.h>
#include<stdbool.h>

int main()
{
    
    int n ;
    printf("Enter the number of rows and columns of the square matrix : ");
    scanf("%d", &n );
    int arr[n][n];
    printf("Enter the elements of the array :\n");
    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = 0 ; j < n ; j++ )
        {
            scanf("%d" , &arr[i][j] );
        }
    }

    printf("The 2D array is as follows : \n");
    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = 0 ; j < n ; j++ )
        {
            printf("%d\t" , arr[i][j] );
        }
        printf("\n");
    }

    bool a = true , b = true , c = true ;
    int ld = 0 , rd = 0 ;
    for(int i = 0 ; i < n ; i++ )
    {
        rd += arr[i][i];
        ld += arr[n-i-1][i];
        for(int j = 0 ; j < n ; j++ )
        {
            if(arr[i][j] != arr[j][i])
            {
                a = false ;
            }
            if( (arr[i][j] != 0) && ( i < j ) )
            {
                b = false ;
            }
            if( (arr[i][j] != 0) && (i != j) )
            {
                c = false ;
            }
        }
    }
    if(a)
    {
        printf("It is a Symmetric Matrix.\n");
    }
    if(b)
    {
        printf("It is a Lower Triangle Matrix.\n");
    }
    if(c)
    {
        printf("It is a Diagonal Matrix.\n");
    }

    printf("The sum of right diagonal = %d\n", rd);
    printf("The sum of left diagonal = %d\n", ld);
    
    return 0 ;
}