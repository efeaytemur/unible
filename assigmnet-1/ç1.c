#include <stdio.h>
int main(){
          int n;
          int fact = 1;
          printf("Write the number you want the take factorial");
          scanf("%d",&n);
          
          for (int i = 1; i <= n; i++)
          {
                    fact = i * fact ;
          }
          printf("%d",fact);
          
}