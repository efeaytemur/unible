#include <stdio.h>

int countChar2D(int rows, int cols, char grid[rows][cols], char target) {
    /**
     * countChar2D - Counts how many times a given character appears in a 2D grid.
     * @param rows: Number of rows in the grid (expected to be 6)
     * @param cols: Number of columns in the grid (expected to be 6)
     * @param grid: 2D array of characters (the grid to search)
     * @param target: The character to count in the grid
     * @return The total number of times the target character appears
     */

    int count = 0;

    // TODO: Loop through the grid and count occurrences of target character

    return count;
}

int main() {
    char grid[6][6] = {
        {'A', 'B', 'C', 'A', 'E', 'F'},
        {'G', 'H', 'A', 'J', 'K', 'L'},
        {'M', 'N', 'O', 'A', 'Q', 'R'},
        {'S', 'T', 'U', 'V', 'W', 'X'},
        {'Y', 'Z', 'A', 'B', 'C', 'D'},
        {'E', 'F', 'G', 'H', 'A', 'J'}
    };

    char target = 'A';

    // TODO: Call the function and print the result

    return 0;
}