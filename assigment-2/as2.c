#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int digits(int number) {
          int temp = 0 ;
          while (number>0)
          {
                    number /=10,
                    temp++;
          }
          return temp;
}
int power(int a,int b) {
          int power = 1 ;
          if ((b=1) ||(b=0 ))
          {
                    power = 1;
          }
          
          for (int i = 2; i < b; i++)
          {
                    power *= a;
          }
          return power;
}
bool sumof_number_divisible_3(int number) {
          int digit_= digits(number);
          int sum=0;
          for (int i = digit_; i > 0; i--)
          {
                    int digit_1 = (number / power(10,i - 1));
                    number = number - digit_1 * power(10,i -1 );
                    sum += digit_1;
                    if (number == 0)
                    {
                              break;
                    }
                    
          }

          return sum;}