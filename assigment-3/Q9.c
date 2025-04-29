#include <stdio.h>

int pathExists(int N, int maze[N][N], int i, int j) {
    /**
    * pathExists - Recursively checks if a path exists from the top-left to bottom-right
    * of a square maze using only right and down moves.
    *
    * @param N: Size of the square matrix (number of rows and columns)
    * @param maze: 2D square matrix (N x N) where 1 represents open path, 0 represents wall
    * @param i: Current row index
    * @param j: Current column index
    * @return: 1 if a valid path exists to the bottom-right corner, 0 otherwise
    */

    // TODO: Base case checks (out of bounds, wall, or destination reached)
    
    // TODO: Try moving right (i, j + 1)
    
    // TODO: Try moving down (i + 1, j)

    return 0; // If no path found
}

int main() {
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 1, 0},
        {0, 0, 1, 1}
    };

    int N = 4;
    int result = pathExists(N, maze, 0, 0);

    // TODO: Print "Path exists: YES" or "Path exists: NO" based on result

    return 0;
}
