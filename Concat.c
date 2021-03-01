/*Lab Assignment-3 26-02-2021 Tathagata Ghosh*/

/*Q8. Write a C program that can take two strings as input, concatenate these and store it in
another character array and display it (do not use standard library function for string
operations).*/

#include<stdio.h>

int main()
{
    char str1[100] , str2[100] ;
    printf("Enter two strings (seperated by line feed) : \n");
    gets(str1);
    gets(str2);
    
    int n1 = 0 ;
    while(str1[n1]!='\0')
    {
        n1++;
    }

    int n2 = 0 ;
    while(str2[n2]!='\0')
    {
        n2++;
    }

    char str[200];
    int k = 0 , c = 0 ;
    while(c < n1)
    {
        str[k++] = str1[c++];
    }

    c=0;
    while(c < n2)
    {
        str[k++] = str2[c++];
    }

    printf("The concatenated string is : \n");
    puts(str);
    return 0 ;
}