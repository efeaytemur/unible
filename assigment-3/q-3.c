
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool indice(int arr[],int size,int k){
          bool flag = false;
          for (int i = 0; i < size; i++)
          {
                    for (int j = 0; j < size; j++)
                    {
                              int absolute = abs(i - j);
                              if ((arr[i] == arr[j]) && (absolute <= k ) && (i != j ))
                              {
                                        flag = true;
                                        printf(" arr %d    arr%d    \n  %d      %d\n  ",arr[i],arr[j],i ,j );
                              }
                              
                    }
                    
          }
          return flag;
}

int main() {
          int k;
          int array[10] = {1,2,3,4,5,6,7,8,9,8};
          printf("Enter k:");
          scanf("%d",&k);
          bool func=indice(array,10,k);
          printf("%d",func);
          return 0 ;
}