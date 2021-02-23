/*Lab Assignment-2 19-02-2021 Tathagata Ghosh*/
/*Q5. Write C program to print the sum of the following series upto nth term, where x or n have
to be taken from the user. Do not use the library function pow () for computation of x
n.
a. S = 1 − 2 + 3 – 4……. up to nth term
b. S = 1 + x^1 + x^2 + x^3 + …..up to nth term*/
#include<stdio.h>

float power( float x , int n )
{
    if( n == 0 )
        return 1 ;
    if( n == 1 )
        return x ;
    return x * power( x , n - 1 );
}

int main()
{
    int n ;
    float x ;
    printf("Enter your choice 'a' or 'b' : ");
    char ch;
    scanf(" %c", &ch );
    switch (ch)
    {
    case 'a':
        printf("Enter the value of n :");
        scanf("%d", &n );
        int sum = 0 , c = 1 ;
        for(int i = 1 ; i <= n ; i++ )
        {
            if( i == n )
                printf("%d", ( i * c ) );
            else
                printf("%d + ", ( i * c ) );
            sum += ( i * c ) ;
            c *= -1 ;
        }
        printf(" = %d\n",sum);
        break ;
    case 'b':
        printf("Enter the values of x and n respectively :");
        scanf("%f %d", &x , &n );
        float s = 0.0 ;
        for (int i = 0; i <= n; i++)
        {
            if( i == n )
                printf("%.2f^%d", x , i );
            else
                printf("%.2f^%d + ", x , i );
            s += power( x , i );
        }
        printf(" = %.2f\n", s ) ;
        break;
    default:
        printf("Invalid Input.");
        break;
    }
    return 0;
}