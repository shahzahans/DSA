/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Factorial Number
 * Problem Statement: given a number n, find its factorial using recursion
 */
#include <iostream>
using namespace std;

int factorial(int n){
    //base cae
    if(n == 0){
        return 1;
    }
    //calling the recursion function
    return n*factorial(n-1);
}

int main()
{
    int n = 5;
    //output: 5*4*3*2*1 = 120
    cout << "The factorial of " << n << " is " << factorial(n);

    return 0;
}