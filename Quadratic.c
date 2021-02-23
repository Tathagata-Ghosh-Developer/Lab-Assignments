/*Lab Assignment-2 19-02-2021 Tathagata Ghosh*/
/*Q4.Write a C program to find the roots of a quadratic equation where the coefficients are
entered by the user. Solve the quadratic equation for real and imaginary roots.*/
#include<stdio.h>
#include<math.h>
/*
Quadratic equation
ax^2 + bx + c = 0
Discriminant, D = b^2 - 4ac
Three cases,
    D > 0 ---> roots are real and unique
    D = 0 ---> roots are real and equal
    D < 0 ---> roots are imaginary
*/
int main()
{
    int a , b , c , d ;
    float root1 = 0.0 , root2 = 0.0 , real , imag ;

    printf("Enter the coefficients of quadratic equation : ");
    scanf("%d %d %d", &a , &b , &c );

    d = b*b - 4*a*c;

    if(d > 0)
    {
        printf("Roots are real and unequal\n");
        root1 = (float)(-b + sqrt(d))/(2*a);
        root2 = (float)(-b - sqrt(d))/(2*a);
        printf("The first root = %f , Second root = %f \n", root1 , root2 );
    }
    if( d == 0 )
    {
        printf("Roots are real and equal\n");
        root1 = root2 = (float)-b/(2*a);
        printf("The equal roots are %f and %f \n", root1 , root2 );
    }
    if( d < 0 )
    {
        printf("Roots are imaginary\n");
        real = (float)-b/(2*a);
        imag = sqrt(-d)/(2*a);
        printf("The first root = %f + i%f \n", real , imag );
        printf("The first root = %f - i%f \n", real , imag );
    }
    return 0;
}