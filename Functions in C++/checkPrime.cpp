/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: sum of the first n natural number
 * Problem Statement: Given an n integer n, write a function that returns the sum of all the natural numbers from 1 to n (both included)
 */
#include <iostream>
using namespace std;

int checkPrime(int n){ //Function to check for prime numbers
    for(int i = 2; i < n; i++){ // loop to see if the number is divisible
        if(n % i == 0){ // if number is divisible by another number then return 0
            return 0;
        }

    }
    return 1; // if the number is not divisible by another number then return 1
}

int main(){
    int n; // decarling an variable

    cout << "Enter a number: ";
    cin >> n; // input an number
    int flag = checkPrime(n);
    
    if(flag == 1){ // flag to check for prime numbers
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
    }

    return 0;
}
