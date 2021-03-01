/*Lab Assignment-3 26-02-2021 Tathagata Ghosh*/

/*Q7. Write a C program to check whether an input string is palindrome or not.*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    gets(str);
    
    int j = 0 ;
    while(str[j]!='\0')
    {
        j++;
    }

    bool f = true ;
    j--;
    for(int i = 0  ; i <= j ; i++ , j-- )
    {
        if(str[i] != str[j])
        {
            f = false ;
            break;
        }
    }

    puts(str);
    if(f)
    {
        printf("Palindrome Word");
    }
    else
    {
        printf("Non-palindrome word");
    }
    return 0 ;
}