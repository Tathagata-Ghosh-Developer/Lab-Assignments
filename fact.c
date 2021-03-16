/*Lab Assignment-3 10-03-2021 Tathagata Ghosh*/

/*Q2. Write a C recursive function to find the factorial of an integer N.*/

#include<stdio.h>
int factorial(int n )
{
    if(n == 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n );
    printf("%d! = %d", n , factorial(n));
    return 0;
}