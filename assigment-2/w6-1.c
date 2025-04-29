#include <stdio.h>
int main() {
          int num = 0;
          printf("num outside if.1: %d \n",num);
          if (1)
          {
          
                    num = 3;
                    printf("num inside if.1: %d \n",num);
                    num = 10;
                    printf("num outside if.2: %d \n",num);
          }
          printf("num outside if.2: %d \n",num);
}