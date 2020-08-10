// Count Upper Case
#include <stdio.h>
#include <string.h>

#define SIZE 100

int countUpperCase(char *str);

int main(void) {
    char str[SIZE];
    // get a string from user input using fgets
    fgets(str, SIZE, stdin);
    
    // printf("The string is: %s", str);
    
    int length = strlen(str); 
    // printf("length is %d\n", length);
    str[length - 1] = '\0'; 
    
    int numUppers = countUpperCase(str);
    
    printf("The number of upper case is: %d\n", numUppers);
    
    
    // EXTRA: get a string using command line arguments
    return 0;
}

// count how many upper case alphabets are in a string
// return the number 
int countUpperCase(char *str) {
    int upperCaseCount = 0;
    int counter = 0;
    while (str[counter] != '\0') {
        if (str[counter] >= 'A' && str[counter] <= 'Z') {
            upperCaseCount++;
        
        }
        counter++;
    }

    return upperCaseCount;
}
