/*Lab Assignment-3 26-02-2021 Tathagata Ghosh*/

/*Q1. Write a C program to search a data-item in the array, if it exists in the array, print the index.*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int size ;//to store the size of the array
    printf("Enter the number of elements of the array : ");
    scanf("%d" , &size );
    int a[size];//array declaration
    printf("Enter the elements of the array : \n");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d", &a[i]);//inputing elements one by one
    }
    
    int n ;//number to search in the array
    printf("Enter the number to search in the array : ");
    scanf("%d", &n);
    bool f = false ;
    for(int i= 0 ; i < size ; i++ )
    {
        if(n==a[i])//checking with each and every element
        {
            printf("%d is found at %d index.", n , i);//printing if found along with the index
            f = true ;
            break;
        }
    }
    if(!f)
    {
        printf("%d is NOT in the given array.", n);
    }

    return 0;
}