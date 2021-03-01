/*Lab Assignment-3 26-02-2021 Tathagata Ghosh*/

/*Q4. Write a C program that can add two matrices, X and Y and store the result in another matrix,
Z. Display the result. */
#include<stdio.h>

int main()
{
    int xr , yr , xc , yc ;
    printf("Enter the number of rows of X and Y : \n");
    scanf("%d %d", &xr , &yr );
    
    if( xr != yr )
    {
        printf("Can't be added.");
        return 0;
    }
    
    printf("Enter the number of columns of X and Y : \n");
    scanf("%d %d", &xc , &yc );
    
    if( xc != yc )
    {
        printf("Can't be added.");
        return 0;
    }
    
    int x[xr][xc];
    printf("Enter the elements of X : \n");
    
    for( int i = 0 ; i < xr ; i++ )
    {
        for( int j = 0 ; j < xc ; j++ )
        {
            scanf("%d", &x[i][j] );
        }
    }

    int y[yr][yc];
    printf("Enter the elements of Y : \n");

    for( int i = 0 ; i < yr ; i++ )
    {
        for( int j = 0 ; j < yc ; j++ )
        {
            scanf("%d", &y[i][j] );
        }
    }

    int z[xc][yr];
    for( int i = 0 ; i < xr ; i++ )
    {
        for( int j = 0 ; j < yc ; j++ )
        {
            z[i][j] = x[i][j] + y[i][j] ;
        }
    }

    printf("The matrix X is : \n");
    for( int i = 0 ; i < xr ; i++ )
    {
        for( int j = 0 ; j < xc ; j++ )
        {
            printf("%d\t", x[i][j] );
        }
        printf("\n");
    }

    printf("The matrix Y is : \n");
    for( int i = 0 ; i < yr ; i++ )
    {
        for( int j = 0 ; j < yc ; j++ )
        {
            printf("%d\t", y[i][j] );
        }
        printf("\n");
    }

    printf("The matrix Z sum of X and Y is : \n");
    for( int i = 0 ; i < xr ; i++ )
    {
        for( int j = 0 ; j < yc ; j++ )
        {
            printf("%d\t", z[i][j] );
        }
        printf("\n");
    }

    return 0;
}