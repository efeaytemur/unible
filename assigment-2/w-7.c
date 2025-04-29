#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int will_overflow(unsigned long long int n){
          return (n > (ULLONG_MAX / 3));
}
void collatz(unsigned long long int n,int steps ){
          if(n == 1 ){
                    printf("Reached 1 in %d steps",steps);
                    return ;
          }
          if (n % 2 == 0)
          {
                    collatz(n/2, steps+1);
          }
          else {
                    if(will_overflow(n)){
                              printf("Overflowed detected");
                              return ;
                    }
                    collatz(3*n+1, steps+1);
          }
          
}
int main() {
          unsigned long long int n;

          printf("Enter a positive integer: ");
          scanf("%llu",&n);


          if (n <= 0)
          {
                    printf("Invalid input. Please enter a positive integer.");
                    return 1;
          }
          collatz(n,0);
          return 0 ;
}