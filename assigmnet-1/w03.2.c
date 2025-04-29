#include <stdio.h>
int main() {
    double bmi = 0;
    double weight = 0;
    double height = 0;
    
    printf("Enter your Weight(kg and Height(Meters))");
    scanf("%lf,%lf", &weight, &height);
    bmi =  weight / (height * height) ;
    if (bmi <16)
    {
          printf("severe thinnes\n");
          /* code */
     }
    else if (bmi<18.5)
    {
          printf("moderate thnines\n");
          /* code */
    }
    else if (bmi<=25)
    {
          printf("normal\n");
          /* code */
    }
    else if (bmi<=30)
    {
          printf("overweight\n");
          /* code */
    }
    else  {
       printf("obese\n");
    }
    printf("your bmi is %lf",bmi);
    
    return 0;
}
