#include <stdio.h>
int main(){
          int x;
          int y;
          int z;
          
          printf("Enter three number:\n");
          scanf("%d %d %d",&x,&y,&z);

          printf("Sum is:%d\n",x + y + z);
          printf("Average is:%d\n",(x + y + z) / 3);
          printf("Product is:%d\n",x * y * z);
          if (x > y && x > z)
          {
                    printf("Largest is:%d\n",x);
          }
          else if (y > z && y > x){
                    printf("Largest is:%d\n",y);
          }
          else if (z > y && z > x){
                    printf("Largest is:%d\n",z);
          }
          if (x < y && x < z)
          {
                    printf("Smallest is:%d",x);
          }
          else if (y < z && y < x){
                    printf("Smallest is:%d",y);
          }
          else if (z < y && z < x){
                    printf("Smallest is:%d",z);
          }
          return 0 ;

}