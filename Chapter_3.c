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

Qf
//age comparison
#include <stdio.h>

int main() 
{
    int ajay,ram,shyam;
    printf("Enter age of Ajay: ");
    scanf("%d", &ajay);
    printf("Enter age of Shyam: ");
    scanf("%d", &shyam);
    printf("Enter age of Ram: ");
    scanf("%d", &ram);
    if(ajay<shyam && ajay<ram)
    {
     printf("Ajay is youngest");
    }
    else if(shyam<ajay && shyam<ram)
    {
     printf("Shyam is youngest");
    }
    else
    {
     printf("Ram is youngest");
    }
    return 0;
}

Qg
//triangle
#include <stdio.h>

int main() 
{
    int a,b,c,sum;
    printf("Enter angle a: ");
    scanf("%d", &a);
    printf("Enter angle b: ");
    scanf("%d", &b);
    printf("Enter angle c: ");
    scanf("%d", &c);
    sum=a+b+c;
    if(sum!=180)
    {
     printf("not a valid triangle");
    }
    else
    {
     printf("valid triangle");
    }
    return 0;
}

Qh
//absolute value
#include <stdio.h>

int main() 
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    
    if(num<0)
    {
     printf("absolute value of number is %d",(-1)*num);
    }
    else
    {
     printf("absolute value of number is %d",num);
    }
    return 0;
}
