#include <stdio.h>
#include <stdbool.h>
int main(){
    int month;
    int year;
    int days;
    bool leap;
    printf("Enter the month in numbers (1 to 12):");
    scanf("%d",&month);
    leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    if (month==2)
    {
          printf("Enter the year:");
          scanf("%d",&year);
    }
    
    
    
    switch (month) {
          case 2:
          days = leap ? 29 : 28;
          break;
          case 4:
          case 6:
          case 9:
          case 11:
          days = 30;
          break;
          default:
          days = 31;
          break;
    }
          printf("%d",days);
}