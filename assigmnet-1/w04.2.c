#include <stdio.h>
#define KM_PER_MILE 1.6093
int main(){
          double distance = 0;
          const double unit_distance = 0.2; /**/
          const int  switch_on = 250;  /*in cents to switch on*/
          const int per_unit = 50; /*in cents*/
          char unit;
          double fare;
          printf("Enter distance with units(k for kilometer / m for miles):");
          scanf("%lf %c",&distance,&unit);
          switch (unit)
          {
          case 'm':
          case 'M':
                    fare = (int)(distance / unit_distance) * per_unit +switch_on;
                    printf("$%d.%d",(int)fare / 100,(int)fare % 100);
                    break;
          case 'k':
          case 'K':
                    distance = distance / KM_PER_MILE;
                    fare = (int)(distance / unit_distance) * per_unit +switch_on;
                    printf("$%d.%d",(int)fare / 100,(int)fare % 100);
                    break;


          
          default:
                   printf("the unit are invalid");
                    break;
          }












}