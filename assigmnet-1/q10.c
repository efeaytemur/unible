#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
          int a;
          int b;
          int r;
          int gcd;
          bool cond = true;

          printf("Enter two numbers:");
          scanf("%d %d",&a,&b);
          
          if ((a ==0 ) && (b == 0 ))
          {
                    printf("GCD is undefined (GCD(0, 0))");
          }
          else if (((a ==0 ) && (b != 0 )) )
          {
                    printf("GCD is the nonzero number (GCD(%d,0)) = %d",b,a);
          }
          else if (((a !=0 ) && (b == 0 )))
          {
                    printf("GCD is the nonzero number (GCD(%d,0)) = %d",a,b);
          }
          else if (a == b)
          {
                    printf("GCD is the number itself (GCD(%d,%d) = %d",a,a,a);
          }
          else if ((a < 0)||(b < 0))
          {
                    
                    int a_abs =abs(a);
                    int b_abs =abs(b);
                    printf("(GCD(%d, %d) = GCD(%d, %d)).",a,b,a_abs,b_abs);
                    
          }
          else if ( ( (double)a / (double)b ) - (a / b) <= 1e-3)
          {
                    printf("GCD is the smaller number (GCD(%d, %d) = %d",a,b,b);
          }
          
          else{
          
          while (cond)
          {
                    r = a % b;
                    a = b;
                    b= r;
                    if (b == 0)
                    {
                            gcd = a;  
                            break;
                    }
                    
          }
          
          printf("GCD is %d",gcd);
}

          
          
          return 0 ;
}