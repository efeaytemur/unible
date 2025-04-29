#include <stdio.h>

int  combi(int n,int r){
          int nr = n-r;
          int first = r < nr ? r : nr;
          int second = r < nr ? nr: r ;

          int f1= 1 ,counter = 0;
          for (int i = 2; i <= first ; i++ ,counter++)
          {
                    f1 *=i;
          }
          int f2= f1 ;
          for (int i = first; i < second; i++, counter ++)
          {
                    f2 *= i;
          }
          int f3 = f2 ; 
          for (int i = second; i <= n; i++, counter++)
          {
                    f3 *=i;
          }
          printf("Total number of multiplication:%d\n",counter);
          return f3 /(f1 * f2);
                    
}
int main() {
          int n ;
          int r;
          printf("Enter two number you want take combibination:");
          scanf("%d %d",&n,&r);
          if (n >= r ){
                    
                    
                    printf("C(%d,%d) is  %d",n,r,combi(n,r)); 
          }
          else {printf("You can not take this combination C(%d,%d):",n,r);}
}