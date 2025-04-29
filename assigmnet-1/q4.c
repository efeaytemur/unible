#include <stdio.h>
#include <stdbool.h>
int main(){
          double number;
          double g_current;
          double g_new;
          bool root ;
          printf("Enter the number you want to find square root:");
          scanf("%lf",&number);
          g_current = 1;
          root= true;
          if (number >= 0){
          while (root)
          {
                    g_new = (g_current + (number / g_current) ) / 2;
                    g_current = g_new;
                    if ((g_current * g_current) - number <= 1E-10 &&  -1E-10 <= (g_current * g_current) - number)
                    {
                              break;
                    }
                    
          }
          printf("Square root of %lf is %.2lf ",number,g_new);
}
          else printf("Error please write positive numbers");          
          return 0 ;

}