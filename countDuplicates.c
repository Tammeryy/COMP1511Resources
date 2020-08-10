// Count Duplicates
#include <stdio.h>

#define SIZE 100

int countDuplicates(int arr[SIZE], int length, int value);

int main(void) {
    int arr[SIZE];
    
    int counter = 0;
    // scan in input from user until ctrl d
    while (scanf("%d", &arr[counter]) == 1) { 
        counter++;
    }
    // counter == length of our array that's initialised
    
    
    // count duplicates
    int duplicates = countDuplicates(arr, counter, 10); // count the number of times 10 appears
    
    printf("The number 10 appeared %d times\n", duplicates);
    
    return 0;
}

// count how many duplicates are there of a particular value
// return the number of duplicates
int countDuplicates(int arr[SIZE], int length, int value) {
    int valCount = 0; 
    int counter = 0;
    
    while (counter < length) {
        
        if (arr[counter] == value) {
            valCount++;
        }
        counter++; 
    }
    return valCount;

}
