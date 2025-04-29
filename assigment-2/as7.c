#include <stdio.h>
#include <stdbool.h>
bool is_prime(int number){
          if( number <= 1) return false;
          if(number == 2) return true;
          if(number % 2 == 0) return false;

 

          for (int i = 3; i * i < number ; i += 2)
          {
                    if(number % i == 0) return false;
          }
          return true;
}
int calculateNewYear(int currentYear){
          if ((currentYear % 4 == 0) && (currentYear % 100 != 0 )){
                    return currentYear + 50 ;
                    
          }
          
          
          
          if ((currentYear % 100 == 0 )){
                    if ((currentYear % 400 == 0 )){
                              return currentYear +  200 ;
                              }
                    return currentYear - 100 ;
                    
          }
          
          
          if (is_prime(currentYear)){
                    return 0 ;
          
          }
          return  currentYear + 10;
}
int main() {
          int currentYear ;
          do {
                    printf("Enter the current year:");
                    scanf("%d",&currentYear);
          } while(currentYear > 2025);
          
          int destinationYear = calculateNewYear(currentYear);
          printf("The destination year is %d",destinationYear);
          return 0 ;
}