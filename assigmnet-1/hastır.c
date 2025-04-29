#include <stdio.h>
int main() {
          int num_1 ;
          int num_2 ;
          int num_3;
          
          printf("Enter three different number:\n");
          scanf("%d %d %d",&num_1,&num_2,&num_3);
          int max;
          int min;

          if ((num_1 < num_2) && (num_3 < num_2) && (num_1 < num_3) )
          {
                    max=num_2;
                    min=num_1;
                    
          }
          else if ((num_3 < num_1) && (num_3 < num_2) && (num_1 < num_2))
          {
                    max=num_2;
                    min=num_3;

          }
          else if ((num_2 < num_3) && (num_2 < num_1) && (num_3 < num_1))
          {
                    max=num_1;
                    min=num_2;

          }
          else if ((num_2 < num_3) && (num_2 < num_1) && (num_3 < num_1))
          {
                    max=num_1;
                    min=num_3;

          }
          else if ((num_2 < num_3) && (num_2 < num_1) && (num_1 < num_3))
          {
                    max=num_3;
                    min=num_2;

          }
          else if ((num_1 < num_3) && (num_2 < num_3) && (num_1 < num_2))
          {
                    max=num_3;
                    min=num_1;

          }
          else {printf("These numbers are equal");}

          printf("Sum is  %d\n",num_1 + num_2 + num_3);
          printf("Average is  %d \n",(num_1 + num_2 + num_3) / 3);
          printf("Product is  %d \n",num_1 * num_2 * num_3);
          printf("%d is largest \n",max);
          printf("%d is smallest ",min);
          

}