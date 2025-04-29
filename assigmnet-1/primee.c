#include <stdio.h>
#include <stdbool.h>
 bool isPrime(int n){
          if (n < 2)
          {
                    return 0;
          }
          for (int i = 2; i * i <= n; i++)
          {
                    if (n % i == 0)
                    {
                              return 0;
                    }
                    
          }
          return true;

 }
 void primes_in_range(int start , int end){
          for (int i = start; i <= end; i++)
          {
                    if (isPrime(i)){
                    printf("%d \n",i);}
          }
          printf("\n");
 }
 int main() {
          int start,end;
          printf("Enter the startingnumber:");
          scanf("%d",&start);
          printf("Enter the end number:");
          scanf("%d",&end);
          printf("Prime numbers between %d and %d :\n",start,end);
          primes_in_range(start,end);
          return 0;
 }