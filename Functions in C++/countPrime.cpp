/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: count prime numbers
 * Problem Statement: Given an array of integers, write a Function that returns the count of prime numbers in it
 */
#include <iostream>
using namespace std;

int checkPrime(int num){ // Function to check for prime numbers
    if (num <= 1) return 0; // "1" and "0" is not prime numbers
    for(int i = 2; i < num; i++){ // loop to find the prime numbers within the array
        if (num%i == 0){ // If number is not prime then its divisible return 0 or else returns 1
            return 0;
        }
    }
    return 1;
}
void countPrime(int a[], int n){ // Function to count the prime numbers within the array
    int primCount = 0;
    for (int i = 0; i < n; i++){ // loop to count 
        if(int flag = checkPrime(a[i])){
            primCount += flag;
        }
    }
    cout << "The number of the prime element present in the array is " << primCount << endl;
}

int main()
{
    // initialize the size 
    int size; // if array is given int n = sizeof(a)/sizeof(a[0]); 
    cout << "Enter the size of the array: ";
    cin >> size; 
    cout << endl;
    
    int a[size];
    cout << "Enter the element you want in your array [\" \"]: ";  
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    countPrime(a,size);

    return 0;
}
