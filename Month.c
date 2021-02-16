/*Lab Assignment-1 15-02-2021 Tathagata Ghosh*/

/*Q6.Using Switch-case block, input the number of the month from the user and display the
corresponding name and number of days in that month.*/

#include<stdio.h>

int main()
{
    int n ;
    printf("Enter the month number : ");
    scanf("%d", &n );
    switch (n)
    {
    case 1:
        printf("January - 31 days\n");
        break;
    case 2:
        printf("February - 28 days\n");
        break;
    case 3:
        printf("March - 31 days\n");
        break;
    case 4:
        printf("April - 30 days\n");
        break;
    case 5:
        printf("May - 30 days\n");
        break;
    case 6:
        printf("June - 30 days\n");
        break;
    case 7:
        printf("July - 31 days\n");
        break;
    case 8:
        printf("August - 31 days\n");
        break;
    case 9:
        printf("September - 30 days\n");
        break;
    case 10:
        printf("October - 31 days\n");
        break;
    case 11:
        printf("November - 30 days\n");
        break;
    case 12:
        printf("December - 31 days\n");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0 ;
}