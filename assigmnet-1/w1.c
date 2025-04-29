#include <stdio.h>
int main() {
    
    int midterm_1 = 0;
    int midterm_2 = 0;
    int final = 0;
    double grade = 0;
    printf("enter the grades:");
    scanf("%d %d %d",&midterm_1,&midterm_2,&final);
    grade = (0.3 * midterm_1) + (0.3 * midterm_2) +( 0.4 * final);
    printf("grade=%.2lf",grade);


}