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
int primes_in_range(int start , int end){
          const int number_Range = start - end + 1 ;
          int array_Num[number_Range] = {} ;
          for (int i = start; i <= end; i++)
          {
                    if (isPrime(i)){
                    int counter = 0 ;
                    array_Num[counter]=i;
                    counter++;
                    }
          }
          return array_Num;
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