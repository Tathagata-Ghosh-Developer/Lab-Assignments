/*Lab Assignment-1 15-02-2021 Tathagata Ghosh*/

/*Q5. Write a C program to test for odd or even of an integer by the following two methods: (i)
division and (ii) bit testing. The integer has to be taken as input from the console.*/
#include<stdio.h>
#include<math.h>

int int_to_bin(int n, int i)
{
    if( n == 0 )
    {
        return 0;
    }
    return int_to_bin( n / 2, i * 10 ) + ( n % 2 ) * i ;
}

int main()
{
    int n,ch,bin;
    printf("Enter your choice '1' or '2' and the number consecutively :");
    scanf("%d %d", &ch , &n );
    switch (ch)
    {
    case 1:
        if( ( 2 * ( n / 2 ) ) == n )
            printf("%d is even.\n",n);
        else
            printf("%d is odd.\n",n);
        break;
    case 2:
        bin = int_to_bin(n,1);
        if( ( bin % 10 ) == 0 )
            printf("%d is even.\n",n);
        else
            printf("%d is odd.\n",n);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}