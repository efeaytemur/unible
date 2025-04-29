#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool indice(int arr[],int size,int k){
          bool flag = false;
          for (int i = 9; i < size; i--)
          {
                    for (int j = 0; j < size; j++)
                    {
                              if ((arr[i] == arr[j]) && (abs(i - j) <= k ))
                              {
                                        flag = true;
                                        printf("%d    %d    \n",i,j);
                              }
                              
                    }
                    
          }
          return flag;
}

int main() {
          int k;
          int array[10] = {4,6,8,2,5,6,4,2,5,8};
          printf("Enter k:");
          scanf("%d",&k);
          bool func=indice(array,10,k);
          printf("%d",func);
          return 0 ;
}