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
//even or odd
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Entered number is Even");
    }
    else
    {
        printf("Entered number is Odd");
    }
    return 0;
}

Qc
// leap year
#include <stdio.h>

int main() {
   int year;
   printf("Enter year: ");
   scanf("%d",&year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      {
          printf("%d is a leap year", year);
      }   
   else
      {
          printf("%d is not a leap year", year);
      }
   return 0;
}

Qd

Qe
// Reverse of digits
#include <stdio.h>
#include<math.h>

int main() {
    int i,j,num,reverse_n=0,n;
    printf("enter a five digit number: ");
    scanf("%d",&num);
    n=num;
    for(i=4;i>=0;i--)
    {
        j=num%10;
        num=num/10;
        reverse_n=reverse_n+j*pow(10,i);
        
    }
    printf("The reverse of digits is equal to: %d\n",reverse_n);
    if(reverse_n !=n)
    {
        printf("numbers are not equal");
    }
    else
    {
        printf("numbers are equal");
    }
    return 0;
}
