/*Lab Assignment-5 17-03-2021 Tathagata Ghosh*/

/*Q3. Write a C program to sort an array of ten integer values in ascending order. Your function
header for sorting should be sortvalue(int *p, int n). */

#include<stdio.h>

void swap( int *a , int *b )
{
    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
    return;
}

void sortvalue(int *p , int n)
{
    for(int i = 0 ; i < n-1 ; i++ )
    {
        for(int j = 0 ; j < (n - i - 1) ; j++ )
        {
            if(*( p + j ) > *( p + j + 1 ))
            {
                swap((p+j),(p+j+1));
            }
        }
    }
    return ;
}

int main()
{
    int n ;
    printf("Enter the number of elements of the array : ");
    scanf("%d", &n );

    int a[n];
    printf("Enter the elements of the array : \n");
    for(int i = 0 ; i < n ; i++ )
    {
        scanf("%d" , (a+i) );
    }

    sortvalue( a , n );

    printf("Enter the elements of the array after sorting in ascending order : \n");
    for(int i = 0 ; i < n ; i++ )
    {
        printf("%d\n" , *(a+i) );
    }
    return 0 ;
}