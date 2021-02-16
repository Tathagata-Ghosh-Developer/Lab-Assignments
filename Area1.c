/*Assignment-1 15-02-2021 Tathagata Ghosh*/

/*Q1. Area of a triangle is given by the formula A = √S(S-a) (S-b) (S-c) where a, b, and c are the
sides of the triangle and 2S = a + b + c. Write a C program to compute the area of the
triangle by taking the values of a, b, and c as CONSTANTS*/

#include<stdio.h>
#include<math.h>

#define a  3.0
#define b  4.0
#define c  5.0

int main()
{
    float s = ( a + b + c ) / 2.0 ;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triagle : %f\n",area);
    return 0 ;
}