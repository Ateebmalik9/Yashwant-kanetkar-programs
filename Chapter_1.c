// Gross salary
#include <stdio.h>

int main() {
    float sal, da, hra, gr_sal;
    printf("Enter salary: ");
    scanf("%f",&sal);
    
    da=0.4*sal;
    hra=0.2*sal;
     
    gr_sal=sal+da+hra;
    printf("Gross Salary is %f",gr_sal);
    return 0;
}
