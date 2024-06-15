/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Takes in an Array as an input, and Finds the sum of element within the Array
 */
 
#include <iostream>
using namespace std;

int main()
{
    int arraySize; // Declare a variable to get an size of an Array
    cout << "Enter the size of the Array: ";
    cin >> arraySize; // input a number for size of an Array
    int a[arraySize]; // Declaring the Array with size
    cout << "\n";
    int sum = 0;
    cout << "Enter the number of element:";
    for (int i = 0; i < arraySize; i++){ // Iterating to get element in an array
        cin >> a[i];
    }
    for (int i = 0; i < arraySize; i++){ // Iterating through to find the sum of all element in an array
        sum += a[i];
    }
    cout << sum;

    return 0;
}