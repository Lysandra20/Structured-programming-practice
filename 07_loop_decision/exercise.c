#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paycode, pieces;
    float salary, hourly_wage, hours, weekly_sales, rate_per_piece, weekly_pay;
    while (1){
        printf("\nEnter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
        scanf("%d", &paycode);
        if(paycode == -1){
           break;
        }
        switch (paycode){
    case 1:
        printf("Enter manager's weekly salary: ");
        scanf("%f", &salary);
        weekly_pay = salary;
        printf("\nManager's pay is %.2f", weekly_pay);
        break;

    case 2:
        printf("Enter hourly wage: ");
        scanf("%f", &hourly_wage);
        printf("Enter hours worked: ");
        scanf("%f", &hours);
        if (hours <= 40){
            weekly_pay = hourly_wage * hours;
        }else{
            weekly_pay =(40 * hourly_wage) + ((hours - 40)*hourly_wage*1.5);
        }
        printf("Hourly worker's pay is %.2f\n", weekly_pay);
        break;

    case 3:
        printf("Enter gross weekly sales: ");
        scanf("%f", &weekly_sales);
        weekly_pay = 250 + (0.057*weekly_sales);
        printf("Commission worker's pay is %.2f\n", weekly_pay);
        break;
    case 4:
        printf("Enter number of pieces produced: ");
        scanf("%d", &pieces);
        printf("Enter wage per piece: ");
        scanf("%f", &rate_per_piece);
        weekly_pay = pieces * rate_per_piece;
        printf("Pieceworker's pay is %.2f\n", weekly_pay);
        break;
    default:
        printf("Invalid paycode! Enter 1-4.\n");
        break;
        }
    }
    printf("End of program.\n");
    return 0;
}
