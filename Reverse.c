/*Lab Assignment-5 17-03-2021 Tathagata Ghosh*/

/*Q4. Write a C program to accept five integer values from keyboard using pointer. Write a
function to print the elements of the array in reverse order.*/

#include<stdio.h>

int main()
{
    int a[5];
    printf("Enter 5 numbers :\n");
    int i ;
    for( i = 0 ; i < 5 ; i++ )
    {
        scanf("%d" , ( a + i ) );
    }
    printf("The elements of the array in the reverse order :\n");
    for( i-- ; i >= 0 ; i-- )
    {
        printf("%d\n", *( a + i ));
    }
    return 0 ;
}