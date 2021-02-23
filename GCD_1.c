/*Lab Assignment-2 19-02-2021 Tathagata Ghosh*/
/*Q2.Write a C program to find out the GCD of two numbers by the following methods – (i) by
repeated subtraction; (ii) by repeated division.*/
#include<stdio.h>
int gcdd( int a , int b )//GCd by Division
{
    if(a % b == 0)
        return b;
    return gcdd( b , a % b );
}
int gcds( int a , int b )//GCD by substraction
{
    if( a == b )
        return a ;
    if( a > b )
        return gcds( a - b , b );
    if( b > a )
        return gcds( a , b - a );
}
int main()
{
    int ch;
    printf("Enter 1.By Substraction Method, 2.By Division Method, any other input is invalid : ");
    scanf("%d",&ch);
    int a,b;
    switch(ch)
    {
        case 1:
            printf("Enter two numbers whose GCD has to be found : ");
            scanf("%d %d",&a,&b);
            printf("The GCD is %d",gcds(a,b));
            break;
        case 2:
            printf("Enter two numbers whose GCD has to be found : ");
            scanf("%d %d",&a,&b);
            printf("The GCD is %d",gcdd(a,b));
            break;
        default:
            printf(" ~ Invalid Input ~ ");
            break;
    }
    return 0;
}