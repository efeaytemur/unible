#include <stdio.h>

int main() {
          int input;       
          int inp[7];
          int out[5];
          for (int i = 0; i < 7; i++)
          {
                    printf("Enter a number:");
                    scanf("%d",&input);
                    inp[i]=input;
          }

          for (int  i = 0 ,j = 0 ; i < 5; i++,j++)
          {
                    out[j]= ((inp[i] + inp[i +1] + inp[i +2]) / 3);
          }
          printf("Input array :");
          for (int i = 0; i < 7  ; i++)
          {
                    printf("%d ",inp[i]);
          }
          printf("\n");
          
          
          printf("Output array :");
          for (int i = 0; i < 5  ; i++)
          {
                    printf("%d ",out[i]);
          }
          printf("\n");

          

          

          return 0 ;

          
}