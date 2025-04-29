#include <stdio.h>
unsigned long long  facto(int n){
          int i = 1 ;
          unsigned long long  fact = 1;
          while (i <= n)
          {
                    fact *= i ;
                    i++ ;
          }
          return fact;
}
int main() {
          int number;
          printf("Enter the number you have take factorial:");
          scanf("%d",&number);
          if (number >=0 ){
                    printf("Factorial of %d using a loop %lld",number,facto(number)); 
          }
          else printf("You can not take negative number factorial:");
}
