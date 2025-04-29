#include <stdio.h>
int main() {
    double temperature_celcius = 0 ;
    double temperature = 0 ;
    char unit ;
printf("Enter the Temperature and type (Celcius or Fahreinheit write only first letter) :");
scanf("%lf %c",&temperature, &unit);
if ((unit =='C') || (unit =='c'))
{
          temperature_celcius=temperature;
          if (temperature_celcius<=0)
          {
                    printf("solid in %.2lf Celcius",temperature_celcius);
                    /* code */
          }
          else if (temperature_celcius<=100)
          {
                    printf("liquid in %.2lf Celcius ",temperature_celcius);
          }
          else  printf("gaseous in %.2lf Celcius",temperature_celcius);       
}
else if ((unit='F') || (unit='f'))
{
          temperature_celcius=((temperature-32)*5/9);
          if (temperature_celcius<=0)
          {
                    printf("solid in %.2lf Fahreinheit",temperature);
                    /* code */
          }
          else if (temperature_celcius<=100)
          {
                    printf("liquid in %.2lf Fahreinheit ",temperature);
          }
          else  printf("gaseous in %.2lf Fahreinheit",temperature);
}
else printf("The character invalid");
return 0;
}