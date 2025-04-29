#include <stdio.h>
int main(){
    int vize1;
    int vize2;
    int final;
    printf("1.vize giriniz:");
    scanf("%d", &vize1);
    printf("2.vize giriniz:");
    scanf("%d", &vize2);
    printf("final giriniz:");
    scanf("%d",&final);
    float gpa=(0.3 * vize1 + 0.3 * vize2 + 0.4* final);
    printf("gpa=%.2f",gpa);
    return 0 ;
}