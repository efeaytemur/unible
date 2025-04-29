#include <stdio.h>
void array_sorting(int arra[],int size){
          for (int i = 1; i < size ; i++)
          {
                    for (int j = 0; j < size -1 ; j++)
                    {
                              if (arra[j] > arra[j+1])
                              {
                                        int temp = arra[j];
                                        arra[j] = arra[j+1];
                                        arra[j+1]=temp;
                              }
                              
                    }
                    
          }
}

void delete_beginning_of_array(int arr[],int size,int deleting_number){
          
          for (int i = 0; i < deleting_number; i++)
          {
                    for (int i = 1; i < size; i++)
                    {
                    arr[i-1]=arr[i];
                    }
                    size--;
          }
}

void delete_end_of_array(int arr[],int size,int deleting_number){
          
          for (int i = 0; i < deleting_number; i++)
          {
                    size--;
          }
          
}
int trimming(int arr[],int size,int deleting_num){

          delete_beginning_of_array(arr,size,deleting_num);
          delete_end_of_array(arr,size,deleting_num);
          return size - (2 * deleting_num);

}

double mean(int arr[],int size){
          int total;
          for (int i = 0; i < size; i++)
          {
                    total += arr[i];
          }
          double mean = total / 6.0 ;
          return mean;
}

int main() {
          int arr[100];
          int current_size = 0;
          int input;
          printf("Enter integer (0 to quit):");
          scanf("%d", &input);
          while (current_size < 100 ) {
                    
                    arr[current_size] = input;
                    current_size++;
                    scanf("%d", &input);
                    
                    if (input == 0 )
                    {
                              break;
                    
                    }
                    
          }
          
          int p;
          printf("Enter the percentage of you want to take trimmed mean:");
          scanf("%d",&p);


          printf("The initale array\n");
          for (int i = 0; i < current_size; i++)
          {
                    printf("%d  ",arr[i]);
          }
          
          printf("\n");
          
          
          array_sorting(arr,current_size);
          
          printf("The Sorted array\n");
          for (int i = 0; i < current_size ; i++)
          {
                    printf("%d  ",arr[i]);
          }
          printf("\n");

          int number_of_deleted = (p * (double)current_size) / 100.0;
          int newsize= trimming(arr,current_size,number_of_deleted);
          printf("The Trimmed array\n");
          for (int i = 0; i < current_size-(2* number_of_deleted); i++)
          {
                    printf("%d  ",arr[i]);
          }
          printf("\n");

          printf("Trimmed mean:%lf",mean(arr,newsize));



}