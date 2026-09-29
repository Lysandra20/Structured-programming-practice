#include <stdio.h>
#include <stdlib.h>

int main()
{
    int accNo,i;
    float old_limit, new_limit, balance;
    for (i=1; i<=3; i++){
        printf("\nEnter customer %d details: ", i);
        printf("\nEnter account number: ");
        scanf("%d", &accNo);
        printf("\nEnter credit limit before recession: ");
        scanf("%f", &old_limit);
        printf("\nEnter current balance: ");
        scanf("%f", &balance);

        new_limit = old_limit / 2;
        printf("\n--- Customer %d ---\n", i);
        printf("\nAccount: %d", accNo);
        printf("\nNew credit limit: %.2f", new_limit);
        printf("\nCurrent balance: %.2f", balance);

        if (balance > new_limit){
            printf("\nStatus: BALANCE EXCEEDS NEW CREDIT LIMIT");
        }else{
            printf("\nStatus: BALANCE WITHIN NEW CREDIT LIMIT");
        }
    }
    return 0;
}
