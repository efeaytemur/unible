#include <stdio.h>
void printPyramid(int number){
          if (number <= 0 ) return ;
          for (int i = 1; i <= number; i++)
          {
                    for (int j = 1; j <=i; j++)
                    {
                              int number_count = j;
                              for(int k= 1 ; k <= j ; k++){
                                        number_count=(number_count * 2) - 1;
                                        printf("%d  ",number_count);

                              }
                              
                    }
                    





                    printf("\n");
          }
          
          
          return ;
}
int main() {
          int rows;
          printf("Enter the number of rows:");
          scanf("%d",&rows);
          printPyramid(rows);
          return 0;
}

