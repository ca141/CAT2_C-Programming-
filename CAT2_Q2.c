#include <stdio.h>

int main() {
    // Declare and initialize a 2D array
    int scores[2][2] = {
        {85, 90}, // Row 1
        {78, 88}  // Row 2
    };

    // Print the elements using a nested for loop
    printf("Elements of the 2D array 'scores':\n");
    for (int i = 0; i < 2; i++) { // Loop through rows
        for (int j = 0; j < 2; j++) { // Loop through columns
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    return 0;
}