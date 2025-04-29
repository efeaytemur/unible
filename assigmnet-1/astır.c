#include <stdio.h>
int compare (int x,int y){
          int max = x;
          if (y > x)
          {
                    max=y;
          }
          return max;
}
int main() {
          int num_1 ;
          int num_2 ;
          
          printf("Enter two number:\n");
          scanf("%d %d",&num_1,&num_2);
          
         
          printf("The larger is:%d",compare(num_1,num_2));
          

}