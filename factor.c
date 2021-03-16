/*Lab Assignment-3 10-03-2021 Tathagata Ghosh*/

/*Q3. Write C functions for the following problems:
a. For a natural number find out its factors.
b. For a range of numbers, say, 1 to N, find out the factors of each number and
determine the one that has got a maximum number of factors.*/

#include<stdio.h>

int num_of_fac(int n, int i)
{
    if(i==n)
        return 1;
    if(n%i == 0)
        return 1 + num_of_fac( n , i + 1 );
    else
        return num_of_fac( n , i + 1); 
}
void fac(int n , int i)
{
    if(i==n+1)
        return;
    if( n % i == 0 )
    printf("%d\t",i);
    fac( n , i+1 ); 
}
int max_fac(int n , int max , int x)
{
    if(n == 0)
    return x;
    if( max < num_of_fac( n , 1 ) )
        {
            max = num_of_fac( n , 1 );
            x = n;
        }
    max_fac( n - 1 , max , x );
}
int main()
{
    printf("Enter a natural number : ");
    int n ;
    scanf("%d",&n);
    printf("The factors of %d are :\t", n);
    fac( n , 1 );
    printf("\n");
    for(int i = 1 ; i <= n ; i++)
    {
        printf("Factors of %d :\t", i);
        fac(i,1);
        printf("\n");
    }
    printf("Number with maximum number of factors : %d", max_fac(n , 0 , 0));
    return 0;
}