#include <stdio.h>
int main(){
          int x;
          int y;
          int result;
          printf("Enter two number:\n");
          scanf("%d %d", &x ,&y);

          if (x == y)
          {
                    printf("two numbers are equal");
          }
          
          else 
          result = x > y ? x : y;
          printf("%d is larger ",result);

}