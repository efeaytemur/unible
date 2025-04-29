#include <stdio.h>

void decodeMessage(int encoded[], int size) {
    /**
     * decodeMessage - Decodes an array of encoded numbers into a message.
     * @param encoded: Array of integers representing encoded letter positions (1 = A, 2 = B, ..., 26 = Z, 27 = ' ')
     * @param size: The number of elements in the encoded array (length of the message)
     * 
     * @return: None. The decoded message is printed to the console.
     */

    // TODO: Loop through each number in the encoded array
    // TODO: Convert number to corresponding character and print it
    for (int i = 0; i < size; i++)
    {
        if (encoded[i] == 1)
        {
            printf("A");
        }
        if (encoded[i] == 2)
        {
            printf("B");
        }
        if (encoded[i] == 3)
        {
            printf("C");
        }
        if (encoded[i] == 4)
        {
            printf("D");
        }
        if (encoded[i] == 5)
        {
            printf("E");
        }
        if (encoded[i] == 6)
        {
            printf("F");
        }
        if (encoded[i] == 7)
        {
            printf("G");
        }
        if (encoded[i] == 8)
        {
            printf("H");
        }
        if (encoded[i] == 9)
        {
            printf("I");
        }if (encoded[i] == 10)
        {
            printf("J");
        }if (encoded[i] == 11)
        {
            printf("K");
        }if (encoded[i] == 12)
        {
            printf("L");
        }if (encoded[i] == 13)
        {
            printf("M");
        }if (encoded[i] == 14)
        {
            printf("N");
        }if (encoded[i] == 15)
        {
            printf("O");
        }
        if (encoded[i] == 16)
        {
            printf("P");
        }
        if (encoded[i] == 17)
        {
            printf("Q");
        }
        if (encoded[i] == 18)
        {
            printf("R");
        }
        if (encoded[i] == 19)
        {
            printf("S");
        }
        if (encoded[i] == 20)
        {
            printf("T");
        }
        if (encoded[i] == 21)
        {
            printf("U");
        }
        if (encoded[i] == 22)
        {
            printf("V");
        }
        if (encoded[i] == 23 )
        {
            printf("W");
        }
        if (encoded[i] == 24 )
        {
            printf("X");
        }
        if (encoded[i] == 25)
        {
            printf("Y");
        }
        if (encoded[i] == 26)
        {
            printf("Z");
        }
        if (encoded[i] == 27)
        {
            printf(" ");
        }
    }
    

}

int main() {
    int encoded[] = {6, 18, 5, 5, 27, 16, 1, 12, 5, 19, 20, 9, 14, 5};
    int size = 14;

    decodeMessage(encoded, size);

    return 0;
}
