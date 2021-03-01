/*Lab Assignment-3 26-02-2021 Tathagata Ghosh*/

/*Q6. Write a C program to convert string in upper case and lower case.*/

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    gets(str);
    
    printf("The original string : \n");
    puts(str);
    
    char strU[100];
    char strL[100];
    for(int i = 0 ; i < 100 ; i++ )
    {
        
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            strU[i] = (char)(str[i] + (char)('A'-'a')) ;
            strL[i] = str[i];
        }
        
        else if ( str[i] >= 'A' && str[i] <= 'Z' )
        {
            strU[i] = str[i] ;
            strL[i] = (char)(str[i] + (char)('a'-'A'));
        }
        
        else
        {
            strL[i] = strU[i] = str[i] ;
        }

    }

    printf("The Upper case string : \n");
    puts(strU);

    printf("The Lower case string : \n");
    puts(strL);

    return 0 ;
}