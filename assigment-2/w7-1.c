#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

unsigned long long int  collatz(unsigned long long int n){
          bool flag_1 = true ;
          int counter = 0;
          if (n % 2 == 0)
          {
                    collatz(n /2 );
                    counter++;
          }
          else if ((n % 2 == 1))
          {
                    collatz((3 * n) - 1);
                    counter++;
          }
          else if(n == 1 ){
                    printf("%d",counter);
          }
          else printf("error");
          
          

}
int main() {
           int number;
           print("Enter a number");
           scanf("%d",&number);
           printf("%d",collatz(number));

}