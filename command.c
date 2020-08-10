#include <stdio.h>

int main(int argc, char *argv[]) {
    
    printf("The number of rows in my command line args is: %d\n", argc);
    
    int row = 0;
    while (row < argc) {
        int col = 0;
        while (argv[row][col] != '\0') {
            printf("%c\n", argv[row][col]);
            col++;
        }
        
        row++;
    }
    
    
    return 0;
}
