/*Lab Assignment-1 15-02-2021 Tathagata Ghosh*/

/*Q4. Write a C program to find the sum of individual digits of a positive integer. The number
has to be taken as input from the keyboard. Keep a check to accept only the numbers with
maximum of three digits.*/

#include<stdio.h>

int main()
{
    int no ;
    printf("Enter a number less than 1000 : ");
    scanf("%d", &no );
    int t = no ;
    if( no < 1000 )
    {
        int sum = (t/100) + ((t%100)/10) + (t%10); 
        printf("Sum of digits : %d\n", sum );
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}