/*Lab Assignment-1 15-02-2021 Tathagata Ghosh*/

/*Q2. Write a C program that reads three integer values from the keyboard and determines if they
are the sides of a right-angled triangle.*/

#include<stdio.h>
#include<math.h>
int max(int a , int b, int c)
{
    int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    return max;
}
int main()
{
    int a , b , c ;
    printf("Enter the three sides of triangle : ");
    scanf("%d %d %d", &a , &b ,&c);
    int hypo = max(a,b,c);
    hypo*=hypo;//hypotenuse^2
    a*=a;//a^2
    b*=b;//b^2
    c*=c;//c^2
    if((hypo==(a+b))||(hypo==(b+c))||(hypo==(c+a)))
        printf("The given sides are of right-angled triangle.");
    else
        printf("The given sides are NOT of right-angled triangle.");
    return 0;
}