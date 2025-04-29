#include <stdio.h>
int main() {
          int num_1 ;
          int num_2 ;
          
          printf("Enter two number:\n");
          scanf("%d %d",&num_1,&num_2);
          int max;
          int min;

          if (num_1 < num_2)
          {
                    max=num_2;
                    min=num_1;
          }
          else if (num_1 > num_2)
          {
                    max=num_1;
                    min=num_2;

          }
          else {printf("These numbers are equal");}
          printf("%d is larger than %d ",max,min);
          

}