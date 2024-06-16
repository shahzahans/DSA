/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an Array of integers as an input, find the greatest/maximum of all its element within the Array
 */
 
#include <iostream>
using namespace std;

int main()
{
    int arraySize; // declare variable for Array size
    int Max = 0; // daclare and initialize to store max value
    
    cout << "Enter the size of an Array: ";
    cin >> arraySize; // takes in size of an array as an input
    
    int a[arraySize]; // declares an array with array size
    
    cout << endl;
    cout << "Enter the " << arraySize << " elements in the Array: "; 
    for (int i = 0; i < arraySize; i++){ // itereate through loop to take in array
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < arraySize; i++){ // itereate through loop to find Max value
        if (a[i] > Max){
            Max = a[i];
        }
    }
    cout << "The greatest/maximum of all its element within the Array is " << Max;
    
    

    return 0;
}