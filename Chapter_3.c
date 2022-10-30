Qa
// profit or loss
#include <stdio.h>

int main() {
    float cp, sp,p;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter selling price: ");
    scanf("%f",&sp);
    p=sp-cp;
    if(p<0)
    {
        printf("you made a loss of %f",-(p/cp)*100);
    }
    else
    {
        printf("you made a profit of %f",(p/cp)*100);
    }
    return 0;
}

Qb
