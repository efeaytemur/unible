#include <stdio.h>

#define TRUE 1
#define FALSE 0
int main() {
          int x; // user entered number
          int flag; // logical variable
          int i; // divisor counter
          printf("Enter an integer number :"); scanf("%d", &x);
          flag = TRUE; // initial assumption (x is a prime)
                    for (i=2; i < x; i++)
          {
          if (x % i == 0) // Check the divisibility of x by i
          {
          printf("\n %d can be divided by %d without a remainder \n ", x, i);
          flag = FALSE; // x is not a prime (because x is divisible by i).
          break; // exit from loop
          }
          } // end for
          if (flag == TRUE)
          printf("%d is a prime number \n", x); // x is undivisible.
          else
          printf("%d is NOT a prime number \n", x); // x is divisible.
}//end