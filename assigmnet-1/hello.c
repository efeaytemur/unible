#include <stdio.h> //printf 
int main(){
    int weight ; //mass,in kg 
    printf("what is your weight (in kg):");
    scanf("%d", &weight);
    double height ; // in m
    printf("What is your Height (in meters):");
    scanf("%lf",&height);
    double bmi= weight/(height*height) ;
    printf("Your BMI is %.4lf \n",bmi);
    
    
    
    
    return 0;
}