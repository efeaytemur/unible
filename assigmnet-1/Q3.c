#include <stdio.h>
int main() {
    double temperature_fahreinheit = 0 ;
    double temperature_celcius = 0 ;
    double temperature = 0 ;
    char unit ;
printf("Enter the Temperature type (Celcius or Fahreinheit write only first letter) :");
scanf("%c", &unit);
printf ("Enter the Degree:");
scanf("%lf", &temperature);
if ((unit =='C') || (unit =='c'))
{
          temperature_celcius=temperature;
          if (temperature_celcius<=0)
          {
                    printf("solid");
                    /* code */
          }
          else if (temperature_celcius<=100)
          {
                    printf("liquid");
          }
          else  printf("gaseous");       
}
else if ((unit='F') || (unit='f'))
{
          temperature_fahreinheit=((temperature-32)*5/9);
          if (temperature_fahreinheit<=0)
          {
                    printf("solid");
                    /* code */
          }
          else if (temperature_fahreinheit<=100)
          {
                    printf("liquid");
          }
          else  printf("gaseous");
}
return 0;
}