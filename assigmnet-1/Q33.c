#include <stdio.h>

int main(){
    double temperature;
    char unit;
    double altitude;
    double decreasing;
    double temperature_C;
    printf("Enter temperature degree(end with F for Fahreinheit or C for Celcius):\n");
    scanf("%lf %c", &temperature , &unit);
    printf("Enter the Altitude in meters \n");
    scanf("%lf",&altitude);

    if(unit == 'C'){
          decreasing = altitude / 300;
          if (temperature <=(0 - decreasing)){
                    printf("Water is Solid(Ice) at %.2lf degrees Celcius\n",temperature);
          }
          else if (temperature < (100 - decreasing))
          {
                    printf("Water is Liquid at %.2lf degrees Celcius\n",temperature);
          }
          else {
                    printf("Water is Gas(Vapour) at %.2lf degrees Celcius\n",temperature);
          }
          
}

    else if(unit == 'F'){
            temperature_C = (temperature - 32)/5*9;
            decreasing= altitude/ 300;
          if (temperature_C <=(0 - decreasing)){
                    printf("Water is Solid(Ice) at %.2lf degrees Fahreinheit\n",temperature);
          }
          else if (temperature < (100 - decreasing))
          {
                    printf("Water is Liquid at %.2lf degrees Fahreinheit\n",temperature);
          }
          else {
                    printf("Water is Gas(Vapour) at %.2lf degrees Fahreinheit\n",temperature);
          }

    }
    else{printf("the Character is invalid,please read the instructions");
}
 return 0 ;
}