#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define WIDTH 384
#define HEIGHT 256
#define WINDOW_SIZE 3

// Defined in bmpio.c
// Just read the docstrings, not the whole code
bool write_bmp_file(const int* pixels, int width, int height, const char* filename);
bool read_bmp_file(int* pixels, int width, int height, const char* filename);


// @brief Apply the median filter to the noisy image
// @param noisy_image: The noisy image
// @param clean_image: The cleaned image
void apply_median_filter(int noisy_image[][WIDTH], int clean_image[][WIDTH - WINDOW_SIZE + 1]) {
    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            int arr[3][3];
            int w = 0 ;
            int h = 0;
            for (int i = 0; i < ; i++)
            {
                for (; h < count; h++)
                    {
                        for (; w < count; w++)
                            {
                                arr[w][h]
                    
                            }
                
                    }
            }
            
            
        }
        
    }
    
}

int main() {
    // COMPLETE ME

    // Create a 2D array to store the noisy image
    int noisy_image[HEIGHT][WIDTH] = {0};
    int clean_image[HEIGHT - WINDOW_SIZE + 1][WIDTH - WINDOW_SIZE + 1] = {0};
    read_bmp(&noisy_image[0][0], WIDTH, HEIGHT, "noisy_image.bmp");



    return 0;
}