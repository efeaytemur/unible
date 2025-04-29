#include <stdio.h>

int main() {
          const int N  = 6;
          int input;       
          int arr[6];
          for (int i = 0; i < N; i++)
          {
                    printf("Enter a number:");
                    scanf("%d",&input);
                    arr[i]=input;
          }
          printf("Array before removing duplicates:");
          for (int i = 0; i < N  ; i++)
          {
                    printf("%d, ",arr[i]);
          }
          printf("\n");

          int curr_size = N;
          int i = 0;
          while (i < curr_size)
          {
                    int j = i + 1 ;
                    while (j < curr_size)
                    {
                              if (arr[i] == arr[j])
                              {
                                        for (int k = j; k < curr_size -1 ; k++)
                                        {
                                                  arr[k] = arr [k+1];
                                        }
                                        curr_size--;
                              }
                              else {
                                        j++;
                              }
                    }
                    i++;
          }
          printf("Array after removing duplicates:");

          for (int i = 0; i < curr_size; i++)
          {
                    printf("%d, ",arr[i]);
          }
          printf("\n");


          return 0 ;

          
}