#include <stdio.h>
int main (){
          int limit_number;
          char operation;
          double x;
          double y ;
          int i = 0 ;

          printf("Enter limit:");
          scanf("%d",&limit_number);
         

          for (int i = 0; i < limit_number; i++)
          {
                    printf("Enter first operand:");
                    scanf("%lf",&x);
                    printf("Enter second operand:");
                    scanf("%lf",&y);
                    printf("Enter  operation (+,-,*,/,^(power)):");
                    scanf("%c",&operation);
                    switch (operation)
                    {
                    case '+':
                              printf("%lf + %lf = %lf\n",x,y,x+y);
                              break;
                    case '-' :
                              printf("%lf - %lf = %lf\n",x,y,x-y);
                              break;
                    case '/' :
                              if (y == 0)
                              {
                                        printf("x/0 is not possible");
                                        break;
                              }
                              
                              printf("%lf / %lf = %lf\n",x,y,x/y);
                              break;
                    case '*' :
                              printf("%lf * %lf = %lf\n",x,y,x*y);
                              break;
                    case '^' :
                              int i = 1;
                              double z;
                              z = y ;
                              while (i<= z)
                              {
                                        z *= z;
                                        i += 1;
                              }
                              
                              printf("%.2lf ^ %.2lf = %.2lf\n",x,y,z);


                              
                              break;
                    case '!' :
                              printf("you pressed ! this means quit the calculation");
                              break;
                   

                    
                    default:
                              printf("The operator is invalid please write valid operator:\n");
                              break;
                    
                    }











            
          }
          return 0 ;
}