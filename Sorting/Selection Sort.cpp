/**
 * Practice Problem ~ Shadman S.
 * Topic: Sorting - Insertion sort
 * Problem Statement: Given an Array, sort the Array using selection-sorting method
 */
#include <iostream>
using namespace std;

class Sort{
public:

    void selectionSort(int numbers[], int numberSize){ // function for Selection Sort
        int indexSmallest;
        int Temp;
        for (int i = 0; i < numberSize - 1; i++){ // 1st loop to iterate to intialize the smallest index & swaps the proper integer in its right place 
            indexSmallest = i; 
            for (int j = i + 1 ; j < numberSize; j++){ // 2nd loop too iterate to find the smallest index
                if (numbers[j] < numbers[indexSmallest]){
                    indexSmallest = j;
                }
        }
        Temp = numbers[i]; // declared temp variable to store the integer for temporary 
        numbers[i] = numbers[indexSmallest];
        numbers[indexSmallest] = Temp;
    }
}
    
    void printLine(){ // function for aading new line
         cout << endl;
     }
};

int main(){
Sort sorts;
int numbers[] = {5,4,3,20,1,6,7,2}; // intialized the array
int numberSize = 8; // intialized the size 

cout << "Unsorted: ";
for (int i = 0; i < numberSize; i++){ // for loop to print Unsorted Array
    cout << numbers[i] << " ";
}
sorts.printLine(); // functions called
sorts.selectionSort(numbers, numberSize);  // functions called

cout << "Sorted: ";
for (int i = 0; i < numberSize; i++){ // for loop to print sorted Array
    cout << numbers[i] << " ";
}
sorts.printLine(); // functions called

    return 0;
}
