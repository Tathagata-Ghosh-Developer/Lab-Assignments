/*Lab Assignment-2 19-02-2021 Tathagata Ghosh*/
/*Q3.Write a C program to find the factorial of a number N using an iterative method. N should
be taken as input from the user. Test with N > 16 and explain why are you getting wrong
results.*/
#include<stdio.h>

int fact( int n )
{
    if( n == 1 )
        return 1 ;
    return n * fact( n - 1 );
}
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d" , &n );
    printf("Factorial of %d is %d", n , fact(n) );
}