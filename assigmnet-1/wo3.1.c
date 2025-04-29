/*
* This program calculates the approximate taxi fare
* in Istanbul for a travel distance given by the user.
*/
#include <stdio.h> // printf, scanf
int main() {
const int switch_on = 1265; // switch-on price, in kurus
const int per_unit = 85; // price per unit distance, in kurus
const double unit_distance = 0.1; // unit distance, in km
const int minimal_fare = 4000; // in kurus
double distance = 0.0; // travel distance, in km
int taximeter = 0; // number on the meter, in TL
int fare = 0; // actual fare, in TL
printf("Enter travel distance (in km): ");
scanf("%lf", &distance);
taximeter = switch_on + per_unit * (int) (distance / unit_distance);
if (taximeter < minimal_fare) {
fare = minimal_fare;
} else {
fare = taximeter;
}
printf("Fare: %d.%02d TL\n", fare / 100, fare % 100);
return 0;
}