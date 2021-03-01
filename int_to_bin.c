/*Lab Assignment-3 26-02-2021 Tathagata Ghosh*/

/*Q2. Write a C programme that can print the binary equivalent of a decimal integer. Here
decimal integer is a user input.*/

#include<stdio.h>

int bit_count(int n)//function to find out the size of the array( maximum power of 2) to store the binary equivalent of the integral part
{
    if(n==0)
    return 0;
    return 1 + bit_count(n/2);
}

int main()
{
    float n ;
    printf("Enter an decimal integer : ");
    scanf("%f", &n);

    int d = (int)n;
    float f = n - d ;
    int size = bit_count(d) ;
    int bin_d[size];
    
    for(int i = size-1 ; i>=0 ; i--)
    {
        bin_d[i] = d % 2 ;
        d /= 2;
    }

    for ( int i = 0; i < size ; i++ )
        {
            printf("%d", bin_d[i]);//printing the binary equivalent of the integral part
        }
    
    if( f==0 )
    {
        printf("\n");
    }
    else
    {
        int bin_f ;
        printf(".");
        for( int i = 0 ; ( i < 15 ) && ( f != 0.0 ) ; i++ )
        {
            bin_f = (int)( f * 2 );//extraction of the decimal part binary equivalent
            printf("%d", bin_f );
            f = (f*2) - bin_f ;
        }
    }
    return 0;
}