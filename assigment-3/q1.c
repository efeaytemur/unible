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
          return 10 - (2 * deleting_num);

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
          int p;
          printf("Enter the percentage of you want to take trimmed mean:");
          scanf("%d",&p);

          int arr[10]={13, 10, 16, 62, 14, 5, 12, -2, -10, 8};
          printf("The initale array\n");
          for (int i = 0; i < 10; i++)
          {
                    printf("%d  ",arr[i]);
          }
          
          printf("\n");
          
          
          array_sorting(arr,10);
          
          printf("The Sorted array\n");
          for (int i = 0; i < 10; i++)
          {
                    printf("%d  ",arr[i]);
          }
          printf("\n");

          int number_of_deleted = (p * 10.0) / 100.0;
          int newsize= trimming(arr,10,number_of_deleted);
          printf("The Trimmed array\n");
          for (int i = 0; i < 10-(2* number_of_deleted); i++)
          {
                    printf("%d  ",arr[i]);
          }
          printf("\n");

          printf("Trimmed mean:%lf",mean(arr,newsize));


          
//bunu userdan input alıp yapanı yapmak mümkün mü bunu düşüün ve array sizeı pointerla değişiyior mu 


}