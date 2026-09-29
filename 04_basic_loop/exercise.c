#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    printf("(A)\n");
    for (i=1; i<=10; i++){
        for(j=1; j<=i; j++){
        printf("%s", "*");          //To print the stars side by side
        }
        printf("\n");
    }
    return 0;
}
