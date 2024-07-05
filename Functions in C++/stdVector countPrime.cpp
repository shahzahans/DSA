/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: count prime numbers
 * Problem Statement: Given an array of integers, write a Function that return the count of prime numbers in it
 */
#include <iostream>
#include <vector>
using namespace std;

int checkPrime(int num){ // Function to check prime numbers 
    if (num <= 1) return 0; // "1" and "0" is not a prime numbers
    for(int i = 2; i < num; i++){ // loop to see if a number is divisible or not
        if (num%i == 0){ // if divisible return 0
            return 0;
        }
    }
    return 1; // if not divisible return 1
}
void countPrime(const vector<int>& a){ // Function to count prime
    int primCount = 0; // Initialize varible to count for prime numbers
    for (int num : a){ // loop where nums takes each numbers in a
        if(checkPrime(num)){ // calling funtion 
            primCount ++; // return value adds up
        }
    }
    cout << "The number of prime element present in array is " << primCount << endl;
}

int main()
{
    int size; // initialize the size variable
    cout << "Enter the size of the Array: ";
    cin >> size; // takes in size as an input
    
    vector<int> a(size); // vector initializing 
    
    cout << "Enter the inegers in Array: ";
    for(int i = 0; i < 5; i++){
        cin >> a[i]; // takes in numbers for vectors and has no limit 
    }
    countPrime(a);

    return 0;
}
