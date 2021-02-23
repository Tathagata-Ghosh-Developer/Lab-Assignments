/*Lab Assignment-2 19-02-2021 Tathagata Ghosh*/
/*Q1.Write a C program to generate set of all prime numbers between 1 and n, 
where the number n have to be supplied by the user.*/

#include<stdio.h>

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);

    int a[n-1];
    for( int i = n ; i > 1 ; i-- )
    {
        a[i-2] = i  ;
    }

    for( int i = 0 ; i < n ; i++ )
    {
        if( a[i] == 0 )
        {
            continue ;
        }
        for(int j = i ; j < n ; j++ )
        {
            if( i == j )
            {
                continue;
            }
            if(( a[j] % a[i] ) == 0)
            {
                a[j] = 0 ;
            }
        }
    }
    
    printf("The Prime numbers from 1 to %d are : ", n);
    for( int i = 0 ; i < n ; i++ )
    {
        if( a[i] != 0 )
        printf(" %d ", a[i] );
    }

    return 0;
}
