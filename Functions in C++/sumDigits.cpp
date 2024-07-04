/**
 * Practice Problem ~ Shadman S.
 * Topic: Functions - sum of the digits of a given number
 * Problem Statement: given a numbers as an input, write a function that return the sum of all the digits of this number
 */
#include <iostream>
using namespace std;

int sumInt(int n){
    int sum = 0;
    while (n!= 0){
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}

int main(){
    int number;

    cout << "Enter a number: " << endl;
    cin >> number;
    int n = number;
    
    cout << "The sum of all the digits of the number " << n << " is " << sumInt(n);
}