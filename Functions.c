/*Lab Assignment-3 10-03-2021 Tathagata Ghosh*/

/*Q1. Write suitable function and corresponding program to test them for the following:
a. Compute X^n, where X is any valid number and n is an integer value.
b. Swap values of two integer variables with (a) using a temporary variable, (b)
without using a temporary variable.
c. Compute the GCD of two integers and return the result to the calling function.
d. Compute and returns the sum of n elements of an integer array.
*/
#include<stdio.h>
float power( float x , int n )
{
    if( n == 1 )
        return x;
    return x * power( x , n - 1 );
}
void swap(int *a , int *b )
{
    int t = *a ;
    *a = *b ;
    *b = t ;
}
void swaps(int *a , int *b )
{
    *a = *a + *b ;
    *b = *a - *b;
    *a = *a - *b;
}
int gcd( int a , int b )
{
    if(a % b == 0)
        return b;
    return gcd( b , a % b );
}
int sum( int a[] , int n )
{
    int s = 0 ;
    for( int i = 0 ; i < n ; i++ )
    {
        s += a[i];
    }
    return s ;
}
int main()
{
    char ch;
    printf("Enter your choice 'a', 'b' , 'c' or 'd' : ");
    scanf(" %c", &ch );
    float x ; int n ;
    int i;
    int a , b ;
    int n1 , n2 ;
    if(ch == 'd')
    {
        printf("Enter the size of integer array : ");
        scanf("%d", &n );      
        int arr[n];
        printf("Enter the elements os the array :\n");
         for ( i = 0 ;i < n ; i++ )
        {
            scanf("%d", &arr[i]);
        }
        printf("Sum of the elements : %d\n", sum(arr,n));
    }
    switch(ch)
    {
        case 'a' : printf("Enter the value of base and index ");
                   scanf("%f%d", &x , &n );
                   printf("%f ^ %d = %f", x , n , power(x,n) );
                   break;
        case 'b' : printf("Enter 1 or 2 : ");
                   scanf("%d", &i );
                   printf("Enter two numbers : ");
                   scanf("%d%d", &a , &b );
                   if( i == 1 )
                   swap( &a , &b );
                   else if( i == 2 )
                   swaps( &a , &b );
                   else
                   {
                       printf("~Invalid Input~");
                       break;
                   }
                   printf("The swapped values are : %d and %d\n", a , b );
                   break;
        case 'c' : printf("Enter two numbers : ");
                   scanf("%d %d", &n1, &n2 );
                   printf("The Greatest Common Divisor of %d and %d id %d.\n", n1 , n2 , gcd(n1,n2) );
                   break;
        case 'd' : break;
        default :  printf("! Invalid Input !");
                   break;
    }
    return 0;
}