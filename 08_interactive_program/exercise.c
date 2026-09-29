#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    do{
        printf("\nMENU\n");
        printf("1. Plain Rice\n");
        printf("2. Rice and beef\n");
        printf("3. Rice and chicken\n");
        printf("4. Rice and beans\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1){
            printf("Plain Rice\n");
        }
        else if (choice == 2){
            printf("Rice and beef\n");
        }
        else if (choice == 3){
            printf("Rice and chicken\n");
        }
        else if (choice == 4){
            printf("Rice and beans\n");
        }
        else if (choice == 5){
            printf("Exiting program...\n");
        }else{
            printf("Invalid choice!");
        }
    } while (choice != 3);
    return 0;
}
