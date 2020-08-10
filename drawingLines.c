// Line Drawing
#include <stdio.h>

#define ROWS 20
#define COLS 36

void drawLine(int arr[ROWS][COLS], int startRow, int startCol, int length);
void printArray(int arr[ROWS][COLS]);
void initialiseArray(int arr[ROWS][COLS]);

int main(void) {
    int arr[ROWS][COLS];
    // scan in input from user until ctrl d
    // count duplicates
    

    return 0;
}

// given a starting pixel (row, col), a length, 
// draw a horizontal "line" across from left to right in the 2D array
// all pixels can be assumed has been initialised with 0s
// Extra: Vertical line? Diagonal Line?
void drawLine(int arr[ROWS][COLS], int startRow, int startCol, int length) {
    // startRow will also be our end row
    // ending column = startCol + length - 1
    int endCol = startCol + length - 1;
    
    int counter = startCol;
    while (counter <= endCol) {
        arr[startRow][counter] = 1;
        counter++;
    }
}


// revise how to go through a given array and print out elements
void printArray(int arr[ROWS][COLS]) {
    int rowCounter = 0;
    while (rowCounter < ROWS) {
        int colCounter = 0;
        while (colCounter < COLS) {
            printf("%d", arr[rowCounter][colCounter]); 
        
            colCounter++;
        }
        printf("\n");
        rowCounter++;
    }
    
}

void initialiseArray(int arr[ROWS][COLS]) {
    int row = 0;
    while (row < ROWS) {
        int col = 0;
        while (col < COLS) {
            arr[row][col] = 0;
            col++;
        }
        row++;
    }
}
