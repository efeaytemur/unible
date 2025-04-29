#include <stdio.h>
unsigned long long  facto(int n){
          int i = 1 ;
          unsigned long long  fact = 1;
          while (i <= n)
          {
                    fact *= i ;
                    i++ ;
          }
          return fact;
}
double combi(int n,int r){
          double  comb ;
          comb = facto(n) / (facto(r) * facto ((n-r)) );
          return comb;

}
int main() {
          int n ;
          int r;
          printf("Enter two number you want take combination:");
          scanf("%d %d",&n,&r);
          if (n >= r ){
                    
                    
                    printf("C(%d,%d) is  %lf",n,r,combi(n,r)); 
          }
          else {printf("You can not take this combination C(%d,%d):",n,r);}
}