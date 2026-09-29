#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, sum, ave, pdt, small, large;
    printf("Enter three different integers: ");         //must separate integers with commas when entering
    scanf("%d, %d, %d", &x, &y, &z);
    sum = x+y+z;
    ave = (x+y+z)/3;
    pdt = x*y*z;
    small = y;
    large = x;
    if (x < small){
        small = x;
    }
    if (z < small){
       small = z;
    }
    if (y > large){
        large = y;
    }
    if (z > large){
       large = z;
    }
    printf("\nSum is %d", sum);
    printf("\nAverage is %d", ave);
    printf("\nProduct is %d", pdt);
    printf("\nSmallest is %d", small);
    printf("\nLargest is %d", large);
    return 0;
}
