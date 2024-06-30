/**
 * Practice Problem ~ Shadman S.
 * Topic: Functions 
 * Problem Statement: given two numbers, write a function that prints all the elements present in the Array separated by a comma
 */
#include <iostream>
using namespace std;


void printArray(int a[], int n){ // Function to print the all the elements
    for (int i = 0; i < n ; i++){ loop to iterate through whole array
        if (a[i] == n ){ // if-statement, to print the last element without the comma
            cout << a[i]; 
        }
        else{ // to print every other element through a comma
            cout << a[i] << ",";
        }
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10}; // initialized the array
    
    int n = sizeof(a)/sizeof(a[0]); // finding the size of the element
    
    cout << "The size of Array is " << n << " and the element that is present within the array is {";
    
    printArray (a,n); // calling the function using set of arguements
    
    cout << "}";
    
}
