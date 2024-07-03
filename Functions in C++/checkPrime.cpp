/**
 * Practice Problem ~ Shadman S.
 * Topic: Function: sum of the first n natural number
 * Problem Statement: Given an n integer n, write a function that returns the sum of all the natural numbers from 1 to n (both included)
 */
#include <iostream>
using namespace std;

int checkPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }

    }
    return 1;
}

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;
    int flag = checkPrime(n);
    
    if(flag == 1){
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
    }

    return 0;
}