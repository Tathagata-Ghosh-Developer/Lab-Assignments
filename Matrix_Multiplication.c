/*Lab Assignment-3 10-03-2021 Tathagata Ghosh*/

/*Q6. Write a C function to multiple two two-dimensional matrices A and B and store the result
in another matrix C.*/
#include<stdio.h>

int main()
{
    printf("Enter the number of rows and columns of 1st matrix respectively : \n");
    int n1,n2,n3;
    scanf("%d%d", &n1 , &n2 );
    printf("Enter the number of columns of 2nd matrix : \n");
    scanf("%d", &n3);
    printf("Enter the values in the 1st matrix : \n");
    int a[n1][n2];
    int b[n2][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    printf("Enter the values in the 2nd matrix : \n") ;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }
    printf("The 1st matrix : \n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd matrix : \n");
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            printf("%d\t" , b[i][j]);
        }
        printf("\n");
    }
    int c[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            c[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                c[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    printf("The resultant matrix after multiplication : \n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            printf("%d\t" , c[i][j]);
        }
        printf("\n");
    }
    return 0;
}