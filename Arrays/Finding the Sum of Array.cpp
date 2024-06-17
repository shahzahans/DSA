/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an Array of integer find the summ of all it's element
 */
 
#include <iostream>
using namespace std;
#include <array>

int main()
{
 int a[5] = {3,2,3,6,4}; // Intiliaze the Array
 int sum = 0; // Intialize variable
 int arraySize = sizeof(a)/sizeof(a[0]); // Finding the size of Array
 cout << "Sum of an Array: ";
    for (int i = 0; i < arraySize; i++){ // Iterating through loop to find the sum of the whole array
        sum += a[i];
    }
    cout << sum << "\n"; // Print the Sum

    return 0;
}
