/*Lab Assignment-3 10-03-2021 Tathagata Ghosh*/

/*Q4. Write a C function reverse (s) to reverse the string s, where s is an argument in the function
reverse (s).*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char s[])
{ 
    char newstr[strlen(s)];
    for( int i = 0 , j = strlen(s)-1 ; i <= strlen(s)-1 ; i++ , j-- )
    {
        newstr[j]=s[i];
    }
    newstr[strlen(s)-1] ='\0';
    strcpy( s, newstr );
    return ;
}

int main()
{
    int size;
    printf("Enter the size of the string and the string : ");
    scanf("%d", &size );
    char s[size+1];
    gets(s);
    reverse(s);
    puts(s);
    return 0;
}