#include <stdio.h>
#include <stdbool.h>
int fibbonacci(int x) {
          if((x == 1) || (x==2)){
                    return 1;
          }
          else {
          return fibbonacci(x - 1) + fibbonacci(x -2);
          }
}
int digit_sum(int sayi){
          int basamak;
          int sum = 0;
          if (sayi <10 )
          {
                    sum = sayi;
          }
          else {
                    while (sayi != 0)
                     {
                              basamak = sayi %10 ;
                              sayi /= 10;
                              sum += basamak;
                    }         
                    
          }
          return sum;
}

int last_digit(int fibonaacci_number){
          int last_dig = fibonaacci_number % 10;
          return last_dig;
}

bool last_dig_difference(int x, int y){
          if ((last_digit(fibbonacci(x)) != last_digit(fibbonacci(y))))
          {
                    return true;
          }
          return false;

}
int main() {
          int number;
          printf("Enter the K:");
          scanf("%d",&number);
          if (number < 0)
          {
                    printf("You must enter postive number:");
          }
          int counter= number;
          for (int i = 1; i <= counter; i++)
          {
                    int fibonacci_number =fibbonacci(i);
                    if ((digit_sum(fibonacci_number) % 3 == 0) && last_dig_difference(i,i+1))
                    {
                              printf("%d  ",fibonacci_number);
                    }
                    else counter++;
                    
          }
          

          
          

}