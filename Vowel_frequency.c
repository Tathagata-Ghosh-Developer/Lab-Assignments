/*Lab Assignment-3 26-02-2021 Tathagata Ghosh*/

/*Q5. Write a C program that takes a string as input and then prints the number of occurrence(s)
of each vowel of the English alphabets in the string. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[ 100 ] ;
    
    printf("Enter the string : \n");
    gets(str);

    printf("The string is : \n");
    puts(str);
    
    int a = 0 , e = 0 , i = 0 , o = 0 , u = 0 ;
    
    for( int c = 0 ; c < 100 ; c++ )
    {
        if((str[c]=='a')||(str[c]=='A'))
        {
            a++;
        }
        if((str[c]=='e')||(str[c]=='E'))
        {
            e++;
        }
        if((str[c]=='i')||(str[c]=='I'))
        {
            i++;
        }
        if((str[c]=='o')||(str[c]=='O'))
        {
            o++;
        }
        if((str[c]=='u')||(str[c]=='U'))
        {
            u++;
        }
    }

    printf("The frequency of 'a' is %d\n", a );
    printf("The frequency of 'e' is %d\n", e );
    printf("The frequency of 'i' is %d\n", i );
    printf("The frequency of 'o' is %d\n", o );
    printf("The frequency of 'u' is %d\n", u );

    return 0 ;

}