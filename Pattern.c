/*Lab Assignment-2 19-02-2021 Tathagata Ghosh*/
/*Q6. Write C programs to print the following pattern for n number of rows, here n is an input
taken from keyboard. Use loops and ASCII codes where ever needed.
a)      *       b)1             c)      A
      * *         2 3                 B C
    * * *         4 5 6             D E F
  * * * *         7 8 9 10        G H I J  
*/
#include<stdio.h>

int main()
{
    char ch;
    int n , c , a ;
    printf("Enter your choice among 'a' , 'b' and  'c' : ");
    scanf("%c", &ch);
    printf("Enter the number of lines : ");
    scanf("%d", &n );
    switch(ch)
    {
        case 'a':
            printf("The pattern 'a' : \n");
            for(int i = 1 ; i <= n ; i++ )
            {
                for(int sp = 4 ; sp >= i ; sp-- )
                {
                    printf(" \t");
                }
                for( int j = 1 ; j <= i ; j++ )
                {
                    printf("*\t");
                }
                printf("\n");
            }
            break;
        case 'b':
            printf("The pattern 'b' : \n");
            c = 1 ;
            for(int i = 1 ; i <= n ; i++ )
            {
                for( int j = 1 ; j <= i ; j++ , c++ )
                {
                    printf("%d\t" , c );
                }
                printf("\n");
            }
            break;
        case 'c':
            printf("The pattern 'c' : \n");
            a = 65 ;
            for(int i = 1 ; i <= n ; i++ )
            {
                for(int sp = 4 ; sp > i ; sp-- )
                {
                    printf(" \t");
                }
                for(int j = 1 ; j <= i ; j++ , a++ )
                {
                    printf(" %c\t",(char)(a));
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid Input :) ");
            break;
    }
}