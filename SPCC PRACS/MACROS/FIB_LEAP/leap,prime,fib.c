#include <stdio.h>
#include "fib_leap.h"
int main()
{
        int n,a,b,i,temp;
        int n1;
        printf("Enter the choice: \n1. Fibonacci series \n2. Prime numbers\n3. Leap Years\n");
        scanf("%d",&n);
        switch(n)
        {
                case 1:
                        printf("\nEnter the total number of terms to get Fibonacci series: ");
                        scanf("%d",&n1);
                        fib(n1);
                        break;
                case 2:
                        printf("\nCheck whether the number is prime or not: ");
                        scanf("%d",&n1);
				prime(n1);
                        break;
                case 3:
                        printf("\nEnter the year to check whether it is leap or not: ");
                        scanf("%d",&n1);
						leap(n1);
                        break;
                default:
                        printf("Wrong Choice");
        }
        return 0;      
}
