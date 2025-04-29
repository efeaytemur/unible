#include <stdio.h>
#include <stdbool.h>
 bool isPrime(int x){
          int flag; // logical variable
          int i; // divisor counter
          flag = true; 
          
          // initial assumption (x is a prime)
                    for (i=2; i < x; i++)
          {
          if (x % i == 0) // Check the divisibility of x by i
          {
          return 0 ;
          flag = false; // x is not a prime (because x is divisible by i).
          break; // exit from loop
          }
          } // end for
          if (flag == true){
          return true;}
          return flag;

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
          printf("Enter the starting number:");
          scanf("%d",&start);
          printf("Enter the end number:");
          scanf("%d",&end);
          printf("Prime numbers between %d and %d :\n",start,end);
          primes_in_range(start,end);
          return 0;
 }