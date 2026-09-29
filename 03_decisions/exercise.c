#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mortgage, int_rate, total_int, total_payable, monthly_payable;
    int years, months;
    printf("Enter mortgage amount in dollars: ");
    scanf("%f", &mortgage);
    printf("\nEnter mortgage term (in years): ");
    scanf("%d", &years);
    printf("\nEnter Interest rate: ");
    scanf("%f", &int_rate);

    if(int_rate > 1){
        int_rate = int_rate / 100;
    }else{
        printf("Invalid input!");
    }
    total_int = mortgage*int_rate*years;
    total_payable = mortgage + total_int;
    months = years*12;
    monthly_payable = total_payable / months;

    printf("\nThe Monthly Payable Interest is: %.2f", monthly_payable);
    return 0;
}
