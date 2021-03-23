/*Lab Assignment-5 17-03-2021 Tathagata Ghosh*/

/*Q1. Write a C program to add two numbers using pointers.*/
#include<stdio.h>

int main()
{
    int a , b ;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a , &b );

    int *aptr = &a ;//pointer to variable a
    int *bptr = &b ;//pointer to variable b
    int sum = 0 ;
    int *sptr = &sum ;//pointer to variable sum

    *sptr = *aptr + *bptr ;//using dereferencing storing the sum of a and b

    printf("%d + %d = %d\n", *aptr , *bptr , *sptr );
    return 0;
}