/*Lab Assignment-5 17-03-2021 Tathagata Ghosh*/

/*Q2. Write a C program to swap two numbers using pointers.*/

#include<stdio.h>

void swap( int *a , int *b )
{
    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
    return;
}
int main()
{
    int a , b ;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a , &b );
    
    int *aptr = &a ;
    int *bptr = &b ;
    
    printf("%d & %d before swapping.\n", *aptr , *bptr );
    
    swap( aptr , bptr );

    printf("%d & %d after swapping.\n", *aptr , *bptr );
    
    return 0;
}