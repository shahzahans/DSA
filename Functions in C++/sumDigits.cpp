/**
 * Practice Problem ~ Shadman S.
 * Topic: Functions - sum of the digits of a given number
 * Problem Statement: given numbers as input, write a function that returns the sum of all the digits of this number
 */
#include <iostream>
using namespace std;

int sumInt(int n){ // Function to add all the digits of this number
    int sum = 0; // initializing a variable to store the sum of digits
    while (n!= 0){ // while loop for summing all the digits of this given number
        int digit = n%10; // first iteration 548/10 = remainder is 8, second iteration 54/10 = remainder is 4, third iteration 5/10 = remainder is  5
        sum = sum + digit; 
        n = n/10; // first iteration 548/10 = 54, second iteration 54/10 = 5
    }
    return sum; // return sum of all digits of the given number
}

int main(){
    int number; // intialzie number variable

    cout << "Enter a number: " << endl;
    cin >> number; // takes in a number as an input
    int n = number; // another initializing for calling the input number for later use if needed
    
    cout << "The sum of all the digits of the number " << n << " is " << sumInt(n); // finally resutls
}
