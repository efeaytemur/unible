#include <stdio.h>


void compute_cube_vol(int side_length){
          int volume = 0;
          if (side_length <=0)
          {
                    return ;
          }
         

          volume = side_length * side_length *side_length;
          printf("Volume of a cube with side len %d :%d\n",side_length,volume);
}
                    

int main(){
         
          for (int i = -3; i <= 5; i++)
          {
          
          compute_cube_vol(i);
                    
          }
          



          return 0;
}