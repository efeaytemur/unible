#include <stdio.h>
int main() {
          int x ;
          int y ;
          int max = 0;
          int min = 0;

          
          printf("Enter two number:\n");
          scanf("%d %d",&x,&y);
          if (x == y)
          {
                    printf("These numbers are equal");
          }
          else{ 
          max = x > y ? x : y ;
          min = x > y ? y : x;
          printf("%d is larger than %d ",max,min);}
          

}