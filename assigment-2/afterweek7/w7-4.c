#include <stdio.h>

void prime_factors(int n){
          if (n == 1)
          {
                    return;
          }
          int number = n;
          for (int i = 2; i <= n; i++)
          {
                    if (number % i == 0)
                    {
                              printf("%d ",i);
                              number = number / i;
                              i--;
                    }
          }
}
int main() {
          int number;
          printf("Enter a number:");
          scanf("%d",&number);
          prime_factors(number);

}