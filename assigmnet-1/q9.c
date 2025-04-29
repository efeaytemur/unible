#include <stdio.h>          
int main() {
          int book_number;
          int days;
          int book_fee;
          int total_fee = 0;
          
          printf("Enter the number of books:");
          scanf("%d",&book_number);
          if (book_number < 0)
          {
                    printf("You must enter positive number:\n");
          }
          
          int i =1;

          while (i <= book_number)
          {
                    printf("Enter days late for book %d:",i);
                    scanf("%d",&days);
                    if ((days >= 0 )&& (days <= 7))
                    {
                    book_fee= 5 * days;
                    }
                    else if ((days >= 8 )&& (days <= 10))
                    {
                    book_fee= 10 * days;
                    }
                    else if ((days >= 10 )&& (days <= 30))
                    {
                    book_fee= 15 * days;
                    }
                    else if ((days > 30))
                    {
                    book_fee= 300;
                    }
                    else if (days < 0 ){
                              continue;
                    }
                    total_fee=book_fee + total_fee;
                    i++;
          
          }
          printf("Total late fee for all books:  %d TL.",total_fee);

          







          return 0;

          
          

}