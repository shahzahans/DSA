/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: count prime numbers
 * Problem Statement: Given an array of integers, write a Function that return the count of prime numbers in it
 */
#include <iostream>
#include <array>
using namespace std;

int checkPrime(int num){ // Function to check for prime number
    if (num <= 1) return 0; // "1" and "0" is not a prime numbers
    for(int i = 2; i < num; i++){ // loop find primes numbers
        if (num%i == 0){ // if divisible not a prime number
            return 0;
        }
    }
    return 1; // else not divisible then it is a prime number
}
void countPrime(const array <int, 5>& a){  // function to count prime numbers
    int primCount = 0; // intialized variable to count prime numbers
    for (int num : a){ // loop take in numbers from a to num
        if(checkPrime(num)){ // if returns happens then primecount ++
            primCount ++;
        }
    }
    cout << "The number of prime element present in array is " << primCount << endl;
}

int main()
{
    array<int, 5> a; // initialized std::array 
    
    cout << "Enter the inegers in Array: "; 
    for(int i = 0; i < 5; i++){ // loop to take array as input
        cin >> a[i];
    }
    countPrime(a); // calling function

    return 0;
}
