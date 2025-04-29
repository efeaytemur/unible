#include <stdio.h>


int compute_cube_vol(int side_length){
          int volume = 0;
          if (side_length <=0)
          {
                    return 0;
          }
          

          volume = side_length * side_length *side_length;
          return volume;
}
                    

int main(){
          int result ;
          for (int i = -3; i <= 5; i++)
          {
                    result = compute_cube_vol(i);
                    printf("Volume of a cube with side len %d :%d\n",i,result);
          }
          



          return 0;
}