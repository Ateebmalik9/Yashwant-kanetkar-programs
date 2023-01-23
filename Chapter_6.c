Qa)
#include<stdio.h>
int main()
{
    int i,j,flag;
    for(i=1;i<=300;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d\n",i);
   }
   return 0;
}

Qb)
#include<stdio.h>
int main()
{
  int i=1;
  while(i)
  {
    printf("%c",i);
  }
  return 0;
}

Qc)
#include<stdio.h>
int main()
{
 int i,j,fact;
 float sum=0,d;
 for(i=1;i<=7;i++)
 {
    fact=1;
    for(j=1;j<=i;j++)
    {
        fact=fact*j;
    }
    d=i/fact;
    sum=sum+d;
    }
    printf("Sum of first seven terms is = %f",sum);
    return 0;
}

Qd)
#include<stdio.h>
int main()
{
    int i,j,k;
    printf("All possible combinations of 1,2 and 3 are: ");
    for(i=1;i<=3;i++)
    {
    	for(j=1;j<=3;j++)
    	{
    		for(k=1;k<=3;k++)
    		{
    			if(i==j || i==k || j==k)
    				continue;
    			printf("%d, ", i*100+j*10+k);
    		}
    	}
    }
    return 0;
}
