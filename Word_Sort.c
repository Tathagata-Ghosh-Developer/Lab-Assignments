/*Lab Assignment-5 17-03-2021 Tathagata Ghosh*/

/*Q5. Suppose the following strings are to be sorted (containing a maximum of 12 characters):
PACIFIC, ATLANTIC, INDIAN, CARIBBEAN, BLACK, RED, NORTH, BALTIC,
CASPIAN. Write a C program to sort the above strings into alphabetical order using an
array of pointers. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort(char *a[] , int n )
{
    for(int i = 0 ; i < (n - 1) ; i++)
    {
        for( int j = 0 ; j < (n - i - 1) ; j++ )
        {
            if(strcmp( a[j] , a[j+1] ) > 0 )
            {
                char *t = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = t ;
            }
        }
    }
    return;
}
int main()
{
    int n ;
    printf("Enter the number of strings : ");
    scanf("%d", &n );
    char *a[n];
    for (int i = 0 ; i < n ; i++)
    {
        a[i] = (char*)malloc(12*sizeof(char));
    }
    printf("Enter the strings at max of length of 12 characters each : ");
    for( int i = 0 ; i < n ; i++ )
    {
        scanf("%s",a[i]);
    }
    sort( a , n );
    for( int i = 0 ; i < n ; i++ )
    {
        puts(a[i]);
    }
    return 0;
}