/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Factorial Number
 * Problem Statement: given a number n, find its factorial using recursion
 */
#include <iostream>
using namespace std;

int factorial(int n){ //function to find factorial number
    //base cae
    if(n == 0){ // if the n reaches 0 then returns 1 and exits out
        return 1;
    }
    //calling the recursion function
    return n*factorial(n-1);
}

int main()
{
    int n = 5; // intializing the number
    //output: 5*4*3*2*1 = 120
    cout << "The factorial of " << n << " is " << factorial(n);

    return 0;
}
