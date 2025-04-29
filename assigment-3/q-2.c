#include <stdio.h>
int main() {
 
          int arr1[3]={2,5,15};
          int arr2[5]={1,4,6,8,10};
          int arr_sum[8];
          for (int i = 0; i < 8; i++)
          {
                    for (int k = 0; k < 5; k++)
                    {
                              for (int j = 0 ; j < 3 ; j++)
                              {
                                        if (arr1[j] > arr2[k])
                                        {
                                                  arr_sum[i] = arr2[k];
                                                  i++;
                                                  k++;
                                                  j--;
                                                  if (i == 6)
                                                  {
                                                            arr_sum[i] =  arr1[j+1] > arr2[k-1] ? arr1[j+1]  : arr2[k-1] ;
                                                  }
                                                  
                                        }
                                        else if (arr1[j] <= arr2[k])
                                        {
                                                  arr_sum[i] = arr1[j];
                                                  i++;
                                                  if (i == 7)
                                                  {
                                                            arr_sum[i] =  arr1[j] > arr2[k] ? arr1[j]  : arr2[k] ;
                                                  }
                                                  
                                        }
                                        
                                        
                              }    
                    }       
          }
          printf("First Array \n");
          for (int i = 0; i < 3; i++)
          {
                    printf("%d  ",arr1[i]);
          }
          printf(" \n");

          printf("Second Array \n");
          for (int i = 0; i < 5; i++)
          {
                    printf("%d  ",arr2[i]);
          }
          printf("\n");
          printf("Sum of  Arrays \n");
          for (int i = 0; i < 8; i++)
          {
                    printf("%d  ",arr_sum[i]);
          }
          
          
          
          return 0;
}